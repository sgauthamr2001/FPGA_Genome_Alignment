module shift_reg #(parameter B = 4)(
    input [1:0] in,
    input clk, 
    input en, 
    input dir, 
    input reset,
    output reg [2 * B - 1 : 0] out 
); 

wire temp[2 * B - 1 : 0]; 

assign temp1 = out >> 2; 
assign temp2 = out << 2; 

always @ (posedge clk) 
    if(reset)
        out <= 0; 
    else begin 
        if(en)
            if(dir) begin 
                out <= {temp1[2 * B - 1 : 2], in};
            end 
            else begin 
                temp = out >> 2 
                out <= {in, temp2[2 * B - 3 : 0]}; 
            end 
        else
            out <= out;
    end 

endmodule  



