/*                          -*- Mode: Verilog -*-

 * Filename : pe_unit.v
 * Description : Single PE unit of the accelerator. 
 * Purpose : Given the inputs to the PE, computes the maximum of those after inc./dec. 
             the inputs based on a match/mis-match or  a gap. Also stores the relative
             positions from which the maximum value is coming to be used in backtrace. 
             Current value of the PE output & a cycle delayed value are needed for the 
             inter-PE data dependency when operation in a systolic design. 
           
 */

module pe_unit(
    input [7:0] in1,                // in-1 being fed from top. 
    input [7:0] in2,                // in-2 being fed from left. 
    input [7:0] in3,                // in-3 being fed from diagonal direction.
    input [2:0] ri,                 // Base-pair of R sub-sequence given as input to PE. 
    input [2:0] qi,                 // Base-pair of Q sub-sequence given as input to PE.  
    input [2:0] re_pos_1,           // 1 or 5 relative positions corresponding to in-1.
    input [2:0] re_pos_2,           // 2 or 6 relative positions corresponding to in-2.
    input [2:0] re_pos_3,           // 3 or 4 relative positions corresponding to in-3. 
    input clk,                      // clk signal.
    input [1:0] reset,              // reset signal. 
    output reg [7:0] out_current,   // Current clocked output. 
    output reg [7:0] out_prev,      // Output from the previous cycle. 
    output reg [2:0] out_re_pos     // Output relative position coming from max value.
);

    wire [7:0] a;          // Corresponds to gap decremented value of in1.
    wire [7:0] b;          // Corresponds to gap decremented value of in2. 
    wire [7:0] c;          // Corresponds to match/mismatch inc./dec. value of in3.
    reg [7:0] max;         // Holds the maximum element at each stage. 

    // Assigning previous values to corresponding inc./dec. versions.

    assign a = in1 - 1;      
    assign b = in2 - 1; 
    assign c = in3 + (ri == qi ? 2 : -1);        // Inc. or dec. is decided based on the values of ri and qi. 

    // Checking the maximum value as well as the index corresponding to maximum combinationally. 

    always @ (*) begin  
        if($signed(a) >= $signed(b) && $signed(a) >= $signed(c) && $signed(a) >= 0) begin 
            max = a;
            out_re_pos = re_pos_1; 
        end 
        else if($signed(b) >= $signed(c) && $signed(b) >= 0) begin 
            max = b; 
            out_re_pos = re_pos_2; 
        end  
        else if($signed(c) >= 0) begin 
            max = c; 
            out_re_pos = re_pos_3; 
        end 
        else begin 
            max = 0;
            out_re_pos = 3'b111;           // 7 corresponds to a null-pointer. 
        end 
    end 

    // Assigning the maximum value to the ouput at clock-edge and updating the prev. value accordingly. 

    always @ (posedge clk) begin
        if(reset == 0) begin
            out_current <= 0;
            out_prev <= 0;
        end 
        else begin 
            out_prev <= out_current; 
            out_current <= max; 
        end 
    end 

    endmodule        // pe_unit  
    