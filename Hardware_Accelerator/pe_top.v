module pe_top #(parameter B = 4)(
    input [7:0] ctr, 
    input [2 * B - 1: 0] R,
    input [2 * B - 1: 0] Q,
    input clk,
    input reset,
    output [2:0] out_pe[0 : B - 1] 
);


wire [7:0] pe1_curr; 
wire [7:0] pe1_prev; 

wire [7:0] pe2_curr; 
wire [7:0] pe2_prev; 

wire [7:0] pe3_curr; 
wire [7:0] pe3_prev; 

wire [7:0] pe4_curr; 
wire [7:0] pe4_prev; 

reg [1:0] D;
reg [1:0] R;

reg [7:0] pe1_in1; 
reg [7:0] pe1_in2; 
reg [7:0] pe1_in3; 

reg [7:0] pe2_in1;
reg [7:0] pe2_in2; 
reg [7:0] pe2_in3; 

reg [7:0] pe3_in1;
reg [7:0] pe3_in2; 
reg [7:0] pe3_in3; 

reg [7:0] pe4_in1; 
reg [7:0] pe4_in2; 
reg [7:0] pe4_in3; 

reg [2:0] pos1;
reg [2:0] pos2; 
reg [2:0] pos3;  

assign @(*) begin 
    if(ctr < B) begin 
        R = 2'b01;
        D = 2'b01; 
    end 
    else if (ctr < 2 * L - B) begin
        R = 2'b10; 
        if (ctr % 2 == 0)
            D = 2'b11
        else
            D = 2'b10
    end 
    else begin 
        R = 2'b11;
        D = 2'b01;
    end 
end 

always @(*) begin 
    case(R):
        2'b01: begin 
            pe1_in1 = 0; 
            pe1_in2 = pe1_curr; 
            pe1_in3 = 0;

            pe2_in1 = pe1_curr;
            pe2_in2 = pe2_curr;
            pe2_in3 = pe1_prev;
            
            pe3_in1 = pe2_curr;
            pe3_in2 = pe3_curr;
            pe3_in3 = pe2_prev;

            pe4_in1 = pe3_curr;
            pe4_in2 = 0;
            pe4_in3 = 0;

            pos1 = 3'b001; 
            pos2 = 3'b010; 
            pos3 = 3'b011; 
        end 
        2'b10: begin 
            if(D == 2'b11) begin
                pe1_in1 = pe1_curr; 
                pe1_in2 = pe2_curr; 
                pe1_in3 = pe1_prev

                pe2_in1 = pe2_curr;
                pe2_in2 = pe3_curr;
                pe2_in3 = pe2_prev;
            
                pe3_in1 = pe3_curr;
                pe3_in2 = pe4_curr;
                pe3_in3 = pe3_prev;

                pe4_in1 = pe4_curr;
                pe4_in2 = 0;
                pe4_in3 = pe4_prev;

                pos1 = 3'b101; 
                pos2 = 3'b100; 
                pos3 = 3'b110; 
            end 
            else begin 
                pe1_in1 = 0; 
                pe1_in2 = pe1_prev; 
                pe1_in3 = pe1_curr;

                pe2_in1 = pe1_curr;
                pe2_in2 = pe2_curr;
                pe2_in3 = pe2_prev;
            
                pe3_in1 = pe2_curr;
                pe3_in2 = pe3_curr;
                pe3_in3 = pe3_prev;

                pe4_in1 = pe3_curr;
                pe4_in2 = pe4_curr;
                pe4_in3 = pe4_prev;

                pos1 = 3'b001; 
                pos2 = 3'b010; 
                pos3 = 3'b100; 
            end 
        end 
        2'b01: begin 
            pe1_in1 = 0; 
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

            pos1 = 3'b001; 
            pos2 = 3'b010; 
            pos3 = 3'b011; 
        end 
    endcase 
end 

pe_unit pe_unit1( 
    .in1(pe1_in1), .in2(pe1_in2), .in3(pe1_in3), 
    .ri(R[1:0]), .qi(Q[1:0]), 
    .re_pos_1(pos1), .re_pos_2(pos2), .re_pos_3(pos3), 
    .clk(clk), .reset(reset),
    .out_current(pe1_curr), .out_prev(pe1_prev), .out_re_pos(out_pe[0])
);

pe_unit pe_unit2( 
    .in1(pe2_in1), .in2(pe2_in2), .in3(pe2_in3), 
    .ri(R[3:2]), .qi(Q[3:2]), 
    .re_pos_1(pos1), .re_pos_2(pos2), .re_pos_3(pos3), 
    .clk(clk), .reset(reset),
    .out_current(pe2_curr), .out_prev(pe2_prev), .out_re_pos(out_pe[1])
);

pe_unit pe_unit3( 
    .in1(pe3_in1), .in2(pe3_in2), .in3(pe3_in3), 
    .ri(R[5:4]), .qi(Q[5:4]),  
    .re_pos_1(pos1), .re_pos_2(pos2), .re_pos_3(pos3), 
    .clk(clk), .reset(reset),
    .out_current(pe3_curr), .out_prev(pe3_prev), .out_re_pos(out_pe[2])
);

pe_unit pe_unit4( 
    .in1(pe4_in1), .in2(pe4_in2), .in3(pe4_in3), 
    .ri(R[7:6]), .qi(Q[7:6]), 
    .re_pos_1(pos1), .re_pos_2(pos2), .re_pos_3(pos3), 
    .clk(clk), .reset(reset),
    .out_current(pe4_curr), .out_prev(pe4_prev), .out_re_pos(out_pe[3])
);

endmodule   