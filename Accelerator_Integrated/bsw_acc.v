/*                          -*- Mode: Verilog -*-

 * Filename : bsw_acc.v
 * Description : Top file for the accelerator
 * Purpose : This is th top module for the accelerator, and has all the instantiations. In the software, 
             each time BandedSW is called with a pair of subsequences, the accelerator is invoked with a
             start signal  (acting as a active high start signal). This module performs the alignment of 
             the given subsequences and gives the aligned subsequences as the output. Once the alignment 
             is done, it also flags the ready signal.
 * Sub Modules : 
    1. shift_reg : Two of these modules are instantiated, corresponding to the Q and R shift registers. 
                   Depending on Q/R, the shift direction is determined. These shift registers are given 
                   in serial inputs from the corresponding subsequences,  and enable signals are driven 
                   if a shift has to take place.
    2. pe_top : This module has instances of pe_unit within it. Together,  they implement the processing 
                element functionality. It also has a data dependency control unit.
    3. tbmodule : This module implements the traceback module. It accesses the traceback memory, and the
                  input subsequences, and determines the alignments  (inserts gaps where required) based
                  on the values stored in  the traceback memory. The tbmodule serially outputs  one base 
                  pair alignment per cycle for R, Q, until it finishes traceback. After this, the values
                  must not be read from here. 
                  
 */

module bsw_acc #(parameter B = 4, parameter L = 8)(
    input clk,                                  // Input clk signal.
    input start,                                // Acts as a active high reset. Once it is deasserted, the accelerator starts functioning.
    input [3 * L - 1 : 0] R,                    // R subsequence to be aligned - input from the software - L base pairs, each denoted by 3 bits.
    input [3 * L - 1 : 0] Q,                    // Q subsequence to be aligned - input from the software - L base pairs, each denoted by 3 bits.
    output reg [3 * L + 5 : 0] R_aligned,       // R aligned subsequence - output from the accelerator - each base pair of 3 bits.
    output reg [3 * L + 5 : 0] Q_aligned,       // Q aligned subsequence - outptu from the accelerator - each base pair of 3 bits.
    output ready                                // Signals that the alignment is completed.

    /*
    For debugging - reading the traceback memory
    output [95:0] pe_mem1,                      // Traceback Memory corresponding to Processing Element (PE) 1.
    output [95:0] pe_mem2,                      // Traceback Memory corresponding to Processing Element (PE) 2.
    output [95:0] pe_mem3,                      // Traceback Memory corresponding to Processing Element (PE) 3.
    output [95:0] pe_mem4                       // Traceback Memory corresponding to Processing Element (PE) 4.
    */
);
    
    reg [2:0] in_r;                // 3 bit serial input to the R shift register - corresponds to the next base pair.
    reg [2:0] in_q;                // 3 bit serial input to the Q shift register - corresponds to the next base pair.

    // Enable signals for R, Q shift register - if high, the shift register shifts the base pairs by one unit, such that they proceed to the next PE.

    reg en_r;                   
    reg en_q;  

    // Indicates if the output from the PEs are valid - in the initial region where all the bp's are yet to enter, the result computed by the PEs would be junk.

    reg pe_valid;       
    reg [7:0] count1;              // Counter that keeps a track of the actual number of valid computations performed by the PEs.

    // Indexing for Q, R register, i.e., to reach a base pair from the subsequence. Since each base pair is 3 bits long, this is inc. by 3 after each read.

    reg [4:0] count2;       
    reg [4:0] count3;      
    wire [11:0] out_pe;            // Output from the pe_top module. Returns the stacked output from all the 4 PEs. 

    reg start_traceback;           // Signals to the traceback module that the traceback memory has been filled, and the traceback phase can begin.
    reg stop_traceback;            // Signals that the traceback phase has ended. 

    wire [3 * B - 1 : 0] R_SR;     // Accessing the R shift register from shift module.
    wire [3 * B - 1 : 0] Q_SR;     // Accessing the Q shift register from shift module.

    reg [7:0] pe1_mem[0:11];       // Traceback Memory corresponding to Processing Element (PE) 1.
    reg [7:0] pe2_mem[0:11];       // Traceback Memory corresponding to Processing Element (PE) 2.
    reg [7:0] pe3_mem[0:11];       // Traceback Memory corresponding to Processing Element (PE) 3.
    reg [7:0] pe4_mem[0:11];       // Traceback Memory corresponding to Processing Element (PE) 4.
     
    /* For debugging - reading the traceback memory
    genvar j;
    for (j=0; j < 12; j=j+1) begin
        assign pe_mem1[8 * (j + 1) - 1 : 8 * j] = pe1_mem[j];
        assign pe_mem2[8 * (j + 1) - 1 : 8 * j] = pe2_mem[j];
        assign pe_mem3[8 * (j + 1) - 1 : 8 * j] = pe3_mem[j];
        assign pe_mem4[8 * (j + 1) - 1 : 8 * j] = pe4_mem[j];
    end
    */

    wire [1:0] req_pe_id;                    // Wire for the PE_id requested by the traceback module
    wire [7:0] req_addr;                     // Wire for the addr in traceback memory corresponding to PE_id requested
    reg [7:0] req_rel_pos;                   // The requested value as retrieved from the traceback memory

    wire [2:0] r_aligned;                    // An aligned R base pair from the traceback module
    wire [2:0] q_aligned;                    // An aligned Q base pair from the traceback module

    wire finish;                             // Signals that the traceback has finished

    reg [7:0] ctr;                           // Used as counter internally

    // Temporary: To hold the shifted values from the Q, R subsequence - used for sending in the next base pair to the shift register serially.

    wire [3 * L - 1 : 0] Q_temp;            
    wire [3 * L - 1 : 0] R_temp;          
    
    initial begin 
        count1 = 0;
        count2 = 0; 
        count3 = 0; 
    end 

    // Assigning Q_temp, R_temp to the shifted value. count2, count3 refers to the position of the current Q, R reads (in bits, i.e., multiples of 3).
    
    assign Q_temp = Q << count2;                      
    assign R_temp = R << count3;                     

    always @(posedge clk) begin
    if(start) begin                                     // Reset condition - all values reset to 0.
        count1 <= 0;
        in_q <= 0;
        en_q <= 0;
        in_r <= 0;
        en_r <= 0;
        count1 <= 0;
        count2 <= 0; 
        count3 <= 0;
        pe_valid <= 0;
        start_traceback <= 0;
    end
    
    // The initial condition which occurs after start. Here, the Q shift registers are still shifting one base pair at a time, 
    // and no base pair has reached the register corresponding to PE 1 yet. During this phase, Q keeps shifting, while R doesn't.

    else if(count2 < 3 * B - 1) begin              
        in_q <= Q_temp[3 * L - 1 : 3 * L - 3];          // Q_temp is the shifted version that corresponds to the currently accessed base pair. 
        en_q <= 1;
        in_r <= 0;
        en_r <= 0;
        count1 <= count1;
        count2 <= count2 + 3;                           // count2 is incremented by 3 as we have shifted a base pair into Q shift reg.
        count3 <= count3;
        pe_valid <= 0;
        start_traceback <= 0;
    end
    else begin
        if(count1 < B) begin                            // This is the top corner region. Here, the R register shifts, Q shift register doesn't.
            in_q <= 0;
            en_q <= 0;
            in_r <= R_temp[3 * L - 1 : 3 * L - 3];
            en_r <= 1;
            count1 <= count1 + 1;                       // count1 is updated considering the actual processing has started, and valid outputs are given from the PEs.
            count2 <= count2; 
            count3 <= count3 + 3;
            pe_valid <= 1;
            start_traceback <= 0;
        end
        else if(count1 < 2 * L - B) begin               // Corresponds to the band extension region. Q & R registers are shifted alternatively.
            if(count1 % 2 == 0) begin                   // At even steps, shift Q shift register.
                in_q <= Q_temp[3 * L - 1 : 3 * L - 3];
                en_q <= 1;
                in_r <= 0;
                en_r <= 0;
                count1 <= count1 + 1;
                count2 <= count2 + 3; 
                count3 <= count3; 
                pe_valid <= 1;
                start_traceback <= 0;
            end
            else begin                                  // At odd steps, shift R shift register.
                in_q <= 0;
                en_q <= 0;
                in_r <= R_temp[3 * L - 1 : 3 * L - 3];
                en_r <= 1;
                count1 <= count1 + 1;
                count2 <= count2; 
                count3 <= count3 + 3;
                pe_valid <= 1;
                start_traceback <= 0;
                end
        end
        else if(count1 <= 2 * L - 1) begin              // Bottom right corner region - only R registers are shifted.
            in_q <= 0;
            en_q <= 0;
            in_r <= 3'b000;                             // We shift in dummy values as these aren't the significant bits.
            en_r <= 1;
            count1 <= count1 + 1;
            count2 <= count2; 
            count3 <= count3;
            pe_valid <= 1;
            start_traceback <= 0;
        end
        else begin                                      // Indicates traceback memory has been filled, proceed to traceback phase.
            in_q <= 0;
            en_q <= 0;
            in_r <= 0;
            en_r <= 0;
            count1 <= count1;
            count2 <= count2; 
            count3 <= count3;
            pe_valid <= 0;
            start_traceback <= 1;
        end
    end
    end

    // Segment to fill in the traceback memory - we use count1 to determine from when the PEs start giving
    // the actual outputs.

    always @(posedge clk) begin
    if (count1 >= 2 & count1 < 14)
        if (pe_valid)
            pe1_mem[count1 - 2] <= out_pe[2:0];         // Lowest 3 bits in out_pe correspond to pe1.
    if (count1 >=3 & count1 < 15)
        if (pe_valid)
            pe2_mem[count1 - 3] <= out_pe[5:3];         // Next 3 bits in out_pe correspond to pe2.  
    if (count1 >=4 & count1 <16)
        if (pe_valid)
            pe3_mem[count1 - 4] <= out_pe[8:6];         // Next 3 bits in out_pe correspond to pe3.  
    if (count1 >=5 & count1 < 17)
        if (pe_valid)
            pe4_mem[count1 - 5] <= out_pe[11:9];        // Highest 3 bits in out_pe correspond to pe4.   
    end


    // Segment to assign the requested value from the traceback memory - the traceback module requests for 
    // the relative position vector stored at the address 'addr' corresponding to the PE 'pe_id'. 

    always @(*) begin
    case(req_pe_id)
        2'b00 : req_rel_pos = pe1_mem[req_addr];        // PE1.
        2'b01 : req_rel_pos = pe2_mem[req_addr];        // PE2.
        2'b10 : req_rel_pos = pe3_mem[req_addr];        // PE3.
        2'b11 : req_rel_pos = pe4_mem[req_addr];        // PE4.
        default : req_rel_pos = pe4_mem[req_addr];      // default case for synthesis compliance.
    endcase
    end

    // Segment to assign stop_traceback after a 1 cycle delay.

    always @(posedge clk) begin
    if (finish)
        stop_traceback <= 1;
    else
        stop_traceback <= 0;
    end

    // Segment to assign the serial aligned base pairs given by the traceback module to the register storing
    // the entire aligned subsequence.

    always @(posedge clk) begin
    if ((start_traceback) && (!finish) && ctr >= 6) begin
        R_aligned[ctr - 6] <= r_aligned[0];
        R_aligned[ctr - 5] <= r_aligned[1]; 
        R_aligned[ctr - 4] <= r_aligned[2]; 
        Q_aligned[ctr - 6] <= q_aligned[0];
        Q_aligned[ctr - 5] <= q_aligned[1]; 
        Q_aligned[ctr - 4] <= q_aligned[2];
        ctr <= ctr + 3;
    end
    else if((start_traceback) && (!finish))
        ctr <= ctr + 3;
    else
        ctr <= 0; 
    end


    assign ready = stop_traceback; // Assigning the read signal based on when traceback has completed.

    // Instantiating shift register for R - dir being 1 indicates left shift.

    shift_reg r_shift(
        .in(in_r),
        .clk(clk),
        .en(en_r),
        .dir(1'b1),
        .out(R_SR)
    );
    
    // Instantiating shift register for Q - dir being 0 indicates right shift.

    shift_reg q_shift(
        .in(in_q),
        .clk(clk),
        .en(en_q),
        .dir(1'b0),
        .out(Q_SR)
    );
    
    // Instantiating pe_top module.

    pe_top pe_module(
        .ctr(count1 - 2'b10),
        .R(R_SR),
        .Q(Q_SR),
        .clk(clk),
        .out_pe(out_pe)
    );

    // Instantiating the traceback module.

    traceback traceback(
        .R_sub(R),
        .Q_sub(Q),
        .clk(clk),
        .start_traceback(start_traceback),
        .pe_id(req_pe_id),
        .addr(req_addr),
        .rel_pos(req_rel_pos),
        .out_r(r_aligned),
        .out_q(q_aligned),
        .finish(finish)
    );

endmodule        // bsw_acc
