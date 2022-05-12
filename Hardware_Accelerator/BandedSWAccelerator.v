module BandedSWAccelerator(
	parameter B = 4,
	parameter L = 8,
	input clk,
	input start,
	input reg [2 : 0] R [0:L-1],
	input reg [2 : 0] Q [0:L-1],
	output [2:0] R_aligned [0:L-1],
	output [2:0] Q_aligned [0:L-1],
	output ready
	
);
	reg [1:0] in_r; 	//2 bit input to the R shift register
	reg [1:0] in_q;	//2 bit input to the Q shift register
	reg en_r;
	reg en_q;
	reg dir_r;
	reg dir_q;
	reg reset;
	reg pe_valid;

	reg [7:0] count1;		//Shift Counter
	reg [4:0] count2;		//indexing for Q register
	reg [4:0] count3;		//indexing for R register
	reg [2:0] out_pe[0 : B - 1];

	wire start_compute;
	wire start_traceback;

	reg [3 * B - 1 : 0] R_SR;	//R shift register
	reg [3 * B - 1 : 0] Q_SR;	//Q shift register

	reg [7:0] pe1_mem[0:11];
	reg [7:0] pe2_mem[0:11];
	reg [7:0] pe3_mem[0:11];
	reg [7:0] pe4_mem[0:11];

	wire [1:0] req_pe_id;
	wire [3:0] req_addr;
	reg [7:0] req_rel_pos;

	wire [2:0] r_aligned;
	wire [2:0] q_aligned;

	reg [2:0] R_aligned [0:L-1];
	reg [2:0] Q_aligned [0:L-1];

	wire finish;

	reg [7:0] ctr;

//	reg [2:0] R_reg [0:L-1];
//	reg [2:0] Q_reg [0:L-1];

			

always @(posedge clk) begin
	if(start) begin
		count1 <= 0;
		in_q <= 0;
		en_q <= 0;
		in_r <= 0;
		en_r <= 0;
		dir_r <= 1;
		dir_q <= 0;
		reset <= 1;
		count2 <= 0; 
		count3 <= 0;
		pe_valid <= 0;	
		start_traceback <= 0;	

	else if(count2 < (3*B) - 1)
		in_q <= Q[count2+1:count2];
		en_q <= 1;
		reset <= 0;
		in_r <= 0;
		en_r <= 0;
		dir_r <= 1;
		dir_q <= 0;
		count1 <= count1;
		count2 <= count2 + 3; 
		count3 <= count3;
		pe_valid <= 1;
		start_traceback <= 0;
	else begin
		if(count1 < B) begin
			in_q <= 0;
			en_q <= 0;
			reset <= 0;
			in_r <= R[count3+1:count3];
			en_r <= 1;
			dir_r <= 1;
			dir_q <= 0;
			count1 <= count1 + 1;
			count2 <= count2; 
			count3 <= count3 + 3;
			pe_valid <= 1;
			start_traceback <= 0;
		end
		else if(count1 < (2*L) - B) begin
			if(count1 % 2 == 0) begin
				in_q <= Q[count2+1:count2];
				en_q <= 1;
				reset <= 0;
				in_r <= 0;
				en_r <= 0;
				dir_r <= 1;
				dir_q <= 0;
				count1 <= count1;
				count2 <= count2 + 3; 
				count3 <= count3; 
				pe_valid <= 1;
				start_traceback <= 0;	
			end
			else begin
				in_q <= 0;
				en_q <= 0;
				reset <= 0;
				in_r <= R[count3+1:count3];
				en_r <= 1;
				dir_r <= 1;
				dir_q <= 0;
				count1 <= count1 + 1;
				count2 <= count2; 
				count3 <= count3 + 3;
				pe_valid <= 1;
				start_traceback <= 0;
				end
		end
		else if(count1 < (2*L)-1) begin
			in_q <= 0;
			en_q <= 0;
			reset <= 0;
			in_r <= 3'b000;
			en_r <= 1;
			dir_r <= 1;
			dir_q <= 0;
			count1 <= count1 + 1;
			count2 <= count2; 
			count3 <= count3;
			pe_valid <= 1;
			start_traceback <= 0;
		end
		else begin
		in_q <= 0;
		en_q <= 0;
		in_r <= 0;
		en_r <= 0;
		dir_r <= 1;
		dir_q <= 0;
		reset <= 1;
		count1 <= count1;
		count2 <= count2; 
		count3 <= count3;	
		pe_valid <= 0;
		start_traceback <= 1;	
		end	
	end
end


always @(posedge clk) begin
	if (count1>=0 & count1<12)
		if (pe_valid)
			pe1_mem[count1] <= out_pe[0];
		else
			pe1_mem[count1] <= pe1_mem[count1];  
	if (count1>=1 & count1<13)
		if (pe_valid)
			pe2_mem[count1-1] <= out_pe[1];  
		else 
			pe2_mem[count1] <= pe2_mem[count1];  
	if (count1>=2 & count1<14)
		if (pe_valid)
			pe3_mem[count1-2] <= out_pe[2];  
		else
			pe3_mem[count1] <= pe3_mem[count1];  
	if (count1>=3 & count1<15)
		if (pe_valid)
			pe4_mem[count1-3] <= out_pe[3];  
		else
			pe4_mem[count1] <= pe4_mem[count1];  
end

			
shift_reg r_shift(.in(in_r),.clk(clk),.en(en_r),.dir(dir_r),.reset(reset),.out(R_SR));
shift_reg q_shift(.in(in_q),.clk(clk),.en(en_q),.dir(dir_q),.reset(reset),.out(Q_SR));
pe_top pe_module(.ctr(count1),.R(R_SR),.Q(Q_SR),.clk(clk),.reset(reset),out_pe(out_pe));

tbmodule traceback(
	.R_sub(R),		// R subsequence
    	.Q_sub(Q),		// Q subsequence
    	.clk(clk),
    	.reset(start_traceback),
	.pe_id(req_pe_id),
	.addr(req_addr),
	.rel_pos(req_rel_pos),
	.out_r(r_aligned),
	.out_q(q_aligned)
	.finish(finish) 
);

always @(*) begin
	case req_pe_id
	2'b00 : req_rel_pos = pe1_mem[req_addr];
	2'b01 : req_rel_pos = pe2_mem[req_addr];
	2'b10 : req_rel_pos = pe3_mem[req_addr];
	2'b11 : req_rel_pos = pe4_mem[req_addr];
	default : req_rel_pos = pe4_mem[req_addr];
	end
end

always @(posedge clk) begin
	if (finish)
		stop_traceback <= 1;
	else
		stop_traceback <= 0;
end

always @(posedge clk) begin
	if (start_traceback) && (!stop_traceback) begin
		R_aligned[ctr] <= r_aligned;
		Q_aligned[ctr] <= q_aligned;
		ctr <= ctr + 1;
	end
	else 
		ctr <= 0;
end		
	

assign ready = stop_traceback;
endmodule
