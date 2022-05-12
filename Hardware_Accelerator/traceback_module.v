//                              -*- Mode: Verilog -*-
// Filename        : traceback_module.v
// Description     : Traceback memory module 
// Purpose         : Realises the Traceback Module
     

module tbmodule (
    input [2: 0] R_sub[0:L-1],		// R subsequence
    input [2: 0] Q_sub[0:L-1],		// Q subsequence
    input clk,
    input start_traceback,              // Start traceback signal
    output [1:0] pe_id,			// PE id
    output [7:0] addr,			// addr - Byte addressed in the BRAM
    input  [7:0] rel_pos,		// Relative position byte, from the Traceback memory BRAM, corresponding to pe_id and addr 
    output [2:0] out_r,			// Output base pair
    output [2:0] out_q,			// Output base pair
    output finish                       // Flag that indicates traceback is over -- stop reading the output from traceback immediately
 
);

reg [2:0] r_ctr;       // Counter for keeping track of R subsequence
reg [2:0] q_ctr;       // Counter for keeping track of Q subsequence

reg [1:0] pe_id;     // 2 bit PE id
reg [7:0] addr;      // Byte address

reg [2:0] out_r;
reg [2:0] out_q;
reg activated;
reg finish;



	always @(posedge clk)
	begin
	   if (start_traceback) && (!activated) begin
	      pe_id <= 3;
	      addr <= 11;         // 2*L - B - 1
	      out_r <= 3'b111;
	      out_q <= 3'b111;
	      r_ctr <= 7; 	  // L-1
	      q_ctr <= 7;	  // L-1
	      finish <= 0;
	      activated <= 1;
	      end
	   else if (start_traceback) && (activated) begin             //Traceback begins at bottom right cell
	     if r_ctr == 3'b000 && q_ctr == 3'b000 begin	// Hit top left corner - traceback finished successfully
	      pe_id <= 0;
	      addr <= 0;         
	      out_r <= R_sub[r_ctr];
	      out_q <= Q_sub[q_ctr];
	      r_ctr <= 0; 	  
	      q_ctr <= 0;	  
	      finish <= 1;
	      activated <= 1;
	      end
	     else begin
		case rel_pos 
		3'b001: begin 
			pe_id <= pe_id -1;
			addr <= addr;
			out_r <= 3'b100;
			out_q <= Q_sub[q_ctr];
			r_ctr <= r_ctr;
			q_ctr <= q_ctr - 1;
			finish <= 0;
			activated <= 1;
			end
		3'b010: begin
			pe_id <= pe_id;
			addr <= addr - 1;
			out_r <= R_sub[r_ctr];
			out_q <= "---";
			r_ctr <= r_ctr - 1;
			q_ctr <= q_ctr;
			finish <= 0;
			activated <= 1;
			end
		3'b011: begin
			pe_id <= pe_id -1;
			addr <= addr - 1;
			out_r <= R_sub[r_ctr];
			out_q <= Q_sub[q_ctr];
			r_ctr <= r_ctr - 1;
			q_ctr <= q_ctr - 1;
			finish <= 0;
			activated <= 1;
			end
		3'b100: begin
			pe_id <= pe_id;
			addr <= addr - 2;
			out_r <= 3'b100;
			out_q <= Q_sub[q_ctr];
			r_ctr <= r_ctr;
			q_ctr <= q_ctr - 1;
			finish <= 0;
			activated <= 1;
			end
		3'b101: begin
			pe_id <= pe_id;
			addr <= add - 1;
			out_r <= 3'b100;
			out_q <= Q_sub[q_ctr];
			r_ctr <= r_ctr;
			q_ctr <= q_ctr - 1;
			finish <= 0;
			activated <= 1;
			end
		3'b110: begin
			pe_id <= pe_id + 1;
			addr <= addr -2;
			out_r <= R_sub[r_ctr];
			out_q <= 3'b100;
			r_ctr <= r_ctr - 1;
			q_ctr <= q_ctr;
			finish <= 0;
			activated <= 1;
			end
		default: begin				// Hit a null vector (in case of 3'b111) - Exit
			 pe_id <= 0;
			 addr <= 0;
			 out_r <= R_sub[r_ctr];
			 out_q <= Q_sub[q_ctr];
			 r_ctr <= r_ctr - 1;
			 q_ctr <= q_ctr - 1;
			 finish <= 1;
			 activated <= 1;
 			 end
		end
	      end
	   end
	   else begin
	      pe_id <= 3;
	      addr <= 11;         // 2*L - B - 1
	      out_r <= 3'b111;
	      out_q <= 3'b111;
	      r_ctr <= 7; 	  // L-1
	      q_ctr <= 7;	  // L-1
	      finish <= 0;
	      activated <= 0;
	   end
	end

		
    
endmodule // tb_module
