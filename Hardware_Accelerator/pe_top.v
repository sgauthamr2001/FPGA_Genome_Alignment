module pe_top #(parameter B = 4, parameter L = 8)(
    input [7:0] ctr, 
    input [11: 0] R,
    input [11: 0] Q,
    input clk,
    output [11:0] out_pe 
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
reg [1:0] r;

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

wire [1:0] reset1;
wire [1:0] reset2; 
wire [1:0] reset3; 
wire [1:0] reset4;  

assign reset1 = ($signed(ctr) < 0) ? 2'b00: 2'b01;
assign reset2 = ($signed(ctr) < 1) ? 2'b00: 2'b01;
assign reset3 = ($signed(ctr) < 2) ? 2'b00: 2'b01;
assign reset4 = ($signed(ctr) < 3) ? 2'b00: 2'b01;

always @(*) begin 
    if(ctr < B && ctr >= 0) begin 
        r = 2'b01;
        D = 2'b01; 
    end 
    else if (ctr < 2 * L - B && ctr > 0) begin
        r = 2'b10; 
        if (ctr % 2 == 0)
            D = 2'b11;
        else
            D = 2'b10;
    end 
    else if (ctr >= 2 * L - B) begin 
        r = 2'b11;
        D = 2'b01;
    end 
    else 
        r = 2'b00;
end 

always @(*) begin 
    case(r)
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
                pe1_in3 = pe1_prev;

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
                pos2 = 3'b110; 
                pos3 = 3'b100; 
            end 
            else begin 
                pe1_in1 = 0; 
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

                pos1 = 3'b001; 
                pos2 = 3'b010; 
                pos3 = 3'b100; 
            end 
        end 
        2'b11: begin 
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
        default: begin 
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

pe_unit pe_unit1( 
    .in1(pe1_in1), .in2(pe1_in2), .in3(pe1_in3), 
    .ri(R[2:0]), .qi(Q[2:0]), 
    .re_pos_1(pos1), .re_pos_2(pos2), .re_pos_3(pos3), 
    .clk(clk), .reset(reset1),
    .out_current(pe1_curr), .out_prev(pe1_prev), .out_re_pos(out_pe[2:0])
);

pe_unit pe_unit2( 
    .in1(pe2_in1), .in2(pe2_in2), .in3(pe2_in3), 
    .ri(R[5:3]), .qi(Q[5:3]), 
    .re_pos_1(pos1), .re_pos_2(pos2), .re_pos_3(pos3), 
    .clk(clk), .reset(reset2),
    .out_current(pe2_curr), .out_prev(pe2_prev), .out_re_pos(out_pe[5:3])
);

pe_unit pe_unit3( 
    .in1(pe3_in1), .in2(pe3_in2), .in3(pe3_in3), 
    .ri(R[8:6]), .qi(Q[8:6]),  
    .re_pos_1(pos1), .re_pos_2(pos2), .re_pos_3(pos3), 
    .clk(clk), .reset(reset3),
    .out_current(pe3_curr), .out_prev(pe3_prev), .out_re_pos(out_pe[8:6])
);

pe_unit pe_unit4( 
    .in1(pe4_in1), .in2(pe4_in2), .in3(pe4_in3), 
    .ri(R[11:9]), .qi(Q[11:9]), 
    .re_pos_1(pos1), .re_pos_2(pos2), .re_pos_3(pos3), 
    .clk(clk), .reset(reset4),
    .out_current(pe4_curr), .out_prev(pe4_prev), .out_re_pos(out_pe[11:9])
);

endmodule   
