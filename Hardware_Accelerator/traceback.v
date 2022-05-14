/*                            -*- Mode: Verilog -*-
 * Filename        : traceback.v
 * Description     : Traceback module to find the alignment of sub-sequences 
 * Purpose         : Given the input sequence as well as the traceback memory, the modules computes 
					 the alignement starting from the bottom-right most entry of the scoring matrix.
 */
    
module traceback #(parameter B = 4, parameter L = 8)(
    input [3 * L - 1 : 0] R_sub,		  // R sub-sequence.
    input [3 * L - 1 : 0] Q_sub,		  // Q sub-sequence.
    input clk,                            // clk signal. 
    input start_traceback,                // Start signal for traceback.
    output reg [1:0] pe_id,			      // PE id
    output reg [7:0] addr,		  		  // addr - Byte addressed in the BRAM.
    input  [7:0] rel_pos,		          // Relative position byte, from the tb. memory BRAM, corresponding to pe_id and addr.
    output reg [2:0] out_r,			      // Output base pair of reference.
    output reg [2:0] out_q,			      // Output base pair of query.
    output reg finish                         // Flag that indicates traceback is over -- stop reading the output from traceback immediately.
);

	reg [2:0] r_ctr;       // Counter for keeping track of R sub-sequence.
	reg [2:0] q_ctr;       // Counter for keeping track of Q sub-sequence.

	reg activated;         // Activates the unit to start the traceback. 

	wire [3 * L - 1 : 0] R_sub_temp;         // Stores the right shifted version of R sub-sequence. 
	wire [3 * L - 1 : 0] Q_sub_temp;         // Stores the right shifted version of Q sub-sequence. 

	// Feeds required input base-pairs for alignment. 
	assign R_sub_temp = R_sub >> (3 * (7 - r_ctr));        
	assign Q_sub_temp = Q_sub >> (3 * (7 - q_ctr)); 

	always @(posedge clk) begin
		if (start_traceback && !activated) begin                 // Remains in this state till start traceback is asserted. 
			pe_id <= 3;
			addr <= 2 * L - B - 1; 
			out_r <= 3'b111;
			out_q <= 3'b111;
			r_ctr <= L - 1; 
			q_ctr <= L - 1; 
			finish <= 0;
			activated <= 1;
		end
		else if (start_traceback && activated) begin             // Traceback begins at bottom right cell.
			if (r_ctr == 3'b000 && q_ctr == 3'b000) begin	     // Hit top left corner - traceback finished successfully.
				pe_id <= 0;
				addr <= 0;         
				out_r <= R_sub_temp[2:0];
				out_q <= Q_sub_temp[2:0];
				r_ctr <= 0; 	  
				q_ctr <= 0;	  
				finish <= 1;
				activated <= 1;
			end
			else begin
				case(rel_pos)  
					3'b001: begin          						 // Relative postion - 1, gap in R.                    
						pe_id <= pe_id - 1; 
						addr <= addr;
						out_r <= 3'b100;                         // 4 represents a gap. 
						out_q <= Q_sub_temp[2:0];
						r_ctr <= r_ctr;
						q_ctr <= q_ctr - 1;
						finish <= 0;
						activated <= 1;
					end
					3'b010: begin          						 // Relative postion - 2, gap in Q. 
						pe_id <= pe_id;
						addr <= addr - 1;
						out_r <= R_sub_temp[2:0];
						out_q <= 3'b100;
						r_ctr <= r_ctr - 1;
						q_ctr <= q_ctr;
						finish <= 0;
						activated <= 1;
					end
					3'b011: begin          						 // Relative postion - 3, match/mismatch. 
						pe_id <= pe_id -1;
						addr <= addr - 1;
						out_r <= R_sub_temp[2:0];
						out_q <= Q_sub_temp[2:0];
						r_ctr <= r_ctr - 1;
						q_ctr <= q_ctr - 1;
						finish <= 0;
						activated <= 1;
					end
					3'b100: begin          						 // Relative postion - 4, match/mismatch. 
						pe_id <= pe_id;
						addr <= addr - 2;
						out_r <= R_sub_temp[2:0];
						out_q <= Q_sub_temp[2:0];
						r_ctr <= r_ctr - 1;
						q_ctr <= q_ctr - 1;
						finish <= 0;
						activated <= 1;
					end
					3'b101: begin          						 // Relative postion - 5, gap in R.
						pe_id <= pe_id;
						addr <= addr - 1;
						out_r <= 3'b100;
						out_q <= Q_sub_temp[2:0];
						r_ctr <= r_ctr;
						q_ctr <= q_ctr - 1;
						finish <= 0;
						activated <= 1;
					end
					3'b110: begin          						 // Relative postion - 6, gap in Q. 
						pe_id <= pe_id + 1;
						addr <= addr -2;
						out_r <= R_sub_temp[2:0];
						out_q <= 3'b100;
						r_ctr <= r_ctr - 1;
						q_ctr <= q_ctr;
						finish <= 0;
						activated <= 1;
					end
					default: begin				                 // Hit a null vector (in case of 3'b111) - Exit.
						pe_id <= 0;
						addr <= 0;
						out_r <= R_sub_temp[2:0];
						out_q <= Q_sub_temp[2:0];
						r_ctr <= r_ctr - 1;
						q_ctr <= q_ctr - 1;
						finish <= 1;
						activated <= 1;
					end
				endcase
			end
		end
		else begin
			pe_id <= 3;
			addr <= 2 * L - B - 1; 
			out_r <= 3'b111;
			out_q <= 3'b111;
			r_ctr <= L - 1;
			q_ctr <= L - 1; 
			finish <= 0;
			activated <= 0;
		end
	end

	endmodule      // traceback
