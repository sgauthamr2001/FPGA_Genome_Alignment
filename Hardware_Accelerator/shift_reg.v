module shift_reg(
    input [2:0] in,
    input clk, 
    input en, 
    input dir, 
    input reset,
    output reg [11: 0] out 
); 

    wire [11 : 0] temp1;
    wire [11 : 0] temp2;

    assign temp1 = out >> 3; 
    assign temp2 = out << 3; 

    always @ (posedge clk) 
        if(reset)
            out <= 0; 
        else begin 
            if(en)
                if(dir) begin 
                    out <= {temp1[11 : 3], in};
                end 
                else begin 
                    out <= {in, temp2[8 : 0]}; 
                end 
            else
                out <= out;
        end 

endmodule  



