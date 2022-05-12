module pe_unit(
    input [7:0] in1,
    input [7:0] in2, 
    input [7:0] in3, 
    input [1:0] ri, 
    input [1:0] qi, 
    input [2:0] re_pos_1,
    input [2:0] re_pos_2, 
    input [2:0] re_pos_3,  
    input clk,
    input reset,
    output reg [7:0] out_current 
    output reg [7:0] out_prev 
    output reg [2:0] out_re_pos
);

wire [7:0] a; 
wire [7:0] b; 
wire [7:0] c; 
wire [7:0] max;

assign a = in1 - 1; 
assign b = in2 - 1; 
assign c = in3 + (ri == qi ? 2 : -1); 

always @ (*) begin  
    if(a > b & a > c & a > 0) begin 
        max = a; 
        out_re_pos = re_pos_1; 
    end 
    else if(b > c & b > 0) begin 
        max = b; 
        out_re_pos = re_pos_2; 
    end  
    else if(c > 0) begin 
        max = c; 
        out_re_pos = re_pos_3; 
    end 
    else begin 
        max = 0;
        out_re_pos = 3'b111; 
    end 
end 

always @ (posedge clk) begin
    if(reset)
        out_current <= 0;
        out_prev <= 0; 
    else begin 
        out_prev <= out_current; 
        out_current <= max; 
    end 
end 

endmodule  