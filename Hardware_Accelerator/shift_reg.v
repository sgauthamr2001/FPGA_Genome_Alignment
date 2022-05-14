/*                         Mode : Verilog


Filename : shift_reg.v
Description : Shift Register module
Purpose : This implements a 4 base pair units shift register. Two of these modules are instantiated, corresponding to the Q and R shift registers. Depending on Q/R, the shift direction is determined. These shift registers are given in serial inputs from the corresponding subsequences, and enable signals are driven if a shift has to take place.


*/

module shift_reg(
    input [2:0] in,   // 3 bit base pair serial input
    input clk,        // clk input
    input en,         // enable signal - if high, the shift register is shifted. Else it remains in its current state
    input dir,        // direction of shifting
    input reset,      // reset the registers to 0
    output reg [11: 0] out  // Output of the 4 
); 

    wire [11 : 0] temp1;  
    wire [11 : 0] temp2;

    assign temp1 = out << 3;     // Assigned the current values left shifted by 3 bits, i.e., shifted by one base pair 
    assign temp2 = out >> 3;     // Assigned the current values right shifted by 3 bits, i.e., shifted by one base pair 
    
    initial begin
        out = 0;
    end 

    always @ (posedge clk) 
        if(reset)
            out <= 0;             // Reset the registers to 0
        else begin 
            if(en)                // Checks if shift is enabled
                if(dir) begin     // Checks for the direction of shifting
                    out <= {temp1[11 : 3], in};      // dir = 1 (for R) implies a left shift by a base pair, and the lowest base pair is loaded in from the serial input
                end 
                else begin 
                    out <= {in, temp2[8 : 0]};      // dir = 0 (for Q) implies a right shift by a base pair, and the highest base pair is loaded in from the serial input 
                end 
            else
                out <= out;       // If shift is not enabled, retain the same values in register
        end 

endmodule  



