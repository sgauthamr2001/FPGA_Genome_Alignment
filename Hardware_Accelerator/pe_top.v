/*                          -*- Mode: Verilog -*-

 * Filename : pe_top.v
 * Description : Connects 4 PE units and feeds inputs satisfying data-dependencies.
 * Purpose : The input to this module are ctr, which shall start after the Q shift reg. 
             has been initialised with B values. R and Q correspond to the data in the 
             shift registers. After connecting the appropriate inputs to PEs as well as 
             satisfying the inter-PE connections, the output obtained shall be the inp.
             of the traceback memory.
           
 */

module pe_top #(parameter B = 4, parameter L = 8)(
    input [7:0] ctr,               // Counter to classify into regions and data-dependencies.   
    input [11:0] R,                // Input taken from the R shift register.
    input [11:0] Q,                // Input taken from the Q shift register.
    input clk,                     // clk signal. 
    output [11:0] out_pe           // Fed as input to traceback memory. 
);

    wire [7:0] pe1_curr;           // Current output of PE - 1.
    wire [7:0] pe1_prev;           // Cycle delayed output of PE - 1.

    wire [7:0] pe2_curr;           // Current output of PE - 2. 
    wire [7:0] pe2_prev;           // Cycle delayed output of PE - 2. 

    wire [7:0] pe3_curr;           // Current output of PE - 3. 
    wire [7:0] pe3_prev;           // Cycle delayed output of PE - 3.

    wire [7:0] pe4_curr;           // Current output of PE - 4. 
    wire [7:0] pe4_prev;           // Cycle delayed output of PE - 4. 

    reg [1:0] D;                   // Type of data - dependency a given PE is operating.
    reg [1:0] region;              // Region in which a given PE is operating. 

    reg [7:0] pe1_in1;             // Top input of PE - 1.
    reg [7:0] pe1_in2;             // Left input of PE - 1. 
    reg [7:0] pe1_in3;             // Diagonal input of PE - 1.

    reg [7:0] pe2_in1;             // Top input of PE - 2.
    reg [7:0] pe2_in2;             // Left input of PE - 2.
    reg [7:0] pe2_in3;             // Diagonal input of PE - 2.

    reg [7:0] pe3_in1;             // Top input of PE - 3. 
    reg [7:0] pe3_in2;             // Left input of PE - 3.
    reg [7:0] pe3_in3;             // Diagonal input of PE - 3. 

    reg [7:0] pe4_in1;             // Top input of PE - 4. 
    reg [7:0] pe4_in2;             // Left input oF PE - 4. 
    reg [7:0] pe4_in3;             // Diagonal input of PE - 4. 

    // Relative positions for current data-dependency. 

    reg [2:0] pos1;                
    reg [2:0] pos2;               
    reg [2:0] pos3;  

    wire [1:0] reset1;             // Reset signal of PE - 1.
    wire [1:0] reset2;             // Reset signal of PE - 2.
    wire [1:0] reset3;             // Reset signal of PE - 3.
    wire [1:0] reset4;             // Reset signal of PE - 4.

    // Each PE is reset with a delay of one cycle between succesive PEs. 

    assign reset1 = ($signed(ctr) < 0) ? 2'b00: 2'b01;         // PE - 1 is reset on ctr = 0.
    assign reset2 = ($signed(ctr) < 1) ? 2'b00: 2'b01;         // PE - 2 is reset on ctr = 1.
    assign reset3 = ($signed(ctr) < 2) ? 2'b00: 2'b01;         // PE - 3 is reset on ctr = 2. 
    assign reset4 = ($signed(ctr) < 3) ? 2'b00: 2'b01;         // PE - 4 is reset on ctr = 3. 

    // Assigning the regions based on the value of ctr.

    always @(*) begin  
        if(ctr < B && ctr >= 0) begin                   // Top corner region, (B - 1) rightward shifts. 
            region = 2'b01;
            D = 2'b01;                                  // Data-dependency of type - 1.
        end 
        else if (ctr < 2 * L - B && ctr > 0) begin      // Middle band extension region, 2 (L - B) shifts.
            region = 2'b10; 
            if (ctr % 2 == 0)                           // Ensures alternate downward & rightward shifts in this region. 
                D = 2'b11;                              // Data-dependency of type - 3.
            else 
                D = 2'b10;                              // Data-dependency of type - 2.
        end 
        else if (ctr >= 2 * L - B) begin                // Bottom corner region, (B - 1) rightward shifts. 
            region = 2'b11;
            D = 2'b01;                                  // Data-dependency of type - 1. 
        end 
        else begin 
            region = 2'b00;                             // Default value of region and dependency. 
            D = 2'b00;
        end 
    end 

    always @(*) begin 
        case(region)
            2'b01: begin                                // Inputs to the PEs are selected based on dependencies. 
                pe1_in1 = 0;                            // Corner case of first PE with no inputs from top. 
                pe1_in2 = pe1_curr; 
                pe1_in3 = 0;                            // First PE has no inputs from diagonal in R1.

                pe2_in1 = pe1_curr;                        
                pe2_in2 = pe2_curr;
                pe2_in3 = pe1_prev;
                
                pe3_in1 = pe2_curr;
                pe3_in2 = pe3_curr;
                pe3_in3 = pe2_prev;

                pe4_in1 = pe3_curr;
                pe4_in2 = 0;                            // Last PE doesn't have inputs from left and diagonal. 
                pe4_in3 = 0;

                pos1 = 3'b001;                          // Relative position values for D1 dependency.
                pos2 = 3'b010; 
                pos3 = 3'b011; 
            end 
            2'b10: begin 
                if(D == 2'b11) begin                    // Input dependencies in R2 and of type D3 (next rightward shift).
                    pe1_in1 = pe1_curr;                 
                    pe1_in2 = pe2_curr; 
                    pe1_in3 = pe1_prev;

                    pe2_in1 = pe2_curr;
                    pe2_in2 = pe3_curr;
                    pe2_in3 = pe2_prev;
                
                    pe3_in1 = pe3_curr;
                    pe3_in2 = pe4_curr;
                    pe3_in3 = pe3_prev;

                    pe4_in1 = pe4_curr; 
                    pe4_in2 = 0;                        // Last PE doesn't have input from left.
                    pe4_in3 = pe4_prev;

                    pos1 = 3'b101;                      // Relative positions values for D3 dependency. 
                    pos2 = 3'b110; 
                    pos3 = 3'b100; 
                end 
                else begin                              // Corresponds to D2 dependency in R2.
                    pe1_in1 = 0;                        // First PE doesn't have input from top.
                    pe1_in2 = pe1_curr; 
                    pe1_in3 = pe1_prev;

                    pe2_in1 = pe1_curr;
                    pe2_in2 = pe2_curr;
                    pe2_in3 = pe2_prev;
                
                    pe3_in1 = pe2_curr;
                    pe3_in2 = pe3_curr;
                    pe3_in3 = pe3_prev;

                    pe4_in1 = pe3_curr;
                    pe4_in2 = pe4_curr;
                    pe4_in3 = pe4_prev;

                    pos1 = 3'b001;                      // Relative positions values for D2 dependency. 
                    pos2 = 3'b010; 
                    pos3 = 3'b100; 
                end 
            end 
            2'b11: begin                                // Corresponds to the bottom corner region. 
                pe1_in1 = 0;                            // First PE is not active in this region, hence inputs set to 0. 
                pe1_in2 = 0; 
                pe1_in3 = 0;

                pe2_in1 = pe1_curr;
                pe2_in2 = pe2_curr;
                pe2_in3 = pe1_prev;
                
                pe3_in1 = pe2_curr;
                pe3_in2 = pe3_curr;
                pe3_in3 = pe2_prev;

                pe4_in1 = pe3_curr;
                pe4_in2 = pe4_curr;
                pe4_in3 = pe3_prev;

                pos1 = 3'b001;                          // Relative position values for D1 dependency.
                pos2 = 3'b010; 
                pos3 = 3'b011; 
            end 
            default: begin                              // Default value of PE inputs and relative positions. 
                pe1_in1 = 0; 
                pe1_in2 = 0; 
                pe1_in3 = 0;

                pe2_in1 = 0; 
                pe2_in2 = 0; 
                pe2_in3 = 0;
                
                pe3_in1 = 0; 
                pe3_in2 = 0; 
                pe3_in3 = 0; 
                
                pe4_in1 = 0; 
                pe4_in2 = 0; 
                pe4_in3 = 0; 

                pos1 = 3'b111; 
                pos2 = 3'b111; 
                pos3 = 3'b111; 
            end 
        endcase 
    end 


    // Instantiating the PE unit modules with appropriate input signals. 

    pe_unit pe_unit1(                   // PE - 1.
        .in1(pe1_in1), 
        .in2(pe1_in2), 
        .in3(pe1_in3), 
        .ri(R[2:0]), 
        .qi(Q[2:0]), 
        .re_pos_1(pos1), 
        .re_pos_2(pos2), 
        .re_pos_3(pos3), 
        .clk(clk), 
        .reset(reset1),
        .out_current(pe1_curr), 
        .out_prev(pe1_prev), 
        .out_re_pos(out_pe[2:0])
    );

    pe_unit pe_unit2(                   // PE - 2. 
        .in1(pe2_in1),
        .in2(pe2_in2), 
        .in3(pe2_in3), 
        .ri(R[5:3]), 
        .qi(Q[5:3]), 
        .re_pos_1(pos1), 
        .re_pos_2(pos2), 
        .re_pos_3(pos3), 
        .clk(clk), 
        .reset(reset2),
        .out_current(pe2_curr), 
        .out_prev(pe2_prev), 
        .out_re_pos(out_pe[5:3])
    );

    pe_unit pe_unit3(                   // PE - 3.
        .in1(pe3_in1), 
        .in2(pe3_in2), 
        .in3(pe3_in3), 
        .ri(R[8:6]), 
        .qi(Q[8:6]),  
        .re_pos_1(pos1), 
        .re_pos_2(pos2), 
        .re_pos_3(pos3), 
        .clk(clk), 
        .reset(reset3),
        .out_current(pe3_curr), 
        .out_prev(pe3_prev), 
        .out_re_pos(out_pe[8:6])
    );

    pe_unit pe_unit4(                   // PE - 4. 
        .in1(pe4_in1), 
        .in2(pe4_in2), 
        .in3(pe4_in3), 
        .ri(R[11:9]), 
        .qi(Q[11:9]), 
        .re_pos_1(pos1), 
        .re_pos_2(pos2), 
        .re_pos_3(pos3), 
        .clk(clk), 
        .reset(reset4),
        .out_current(pe4_curr), 
        .out_prev(pe4_prev), 
        .out_re_pos(out_pe[11:9])
    );

    endmodule        // pe_top
