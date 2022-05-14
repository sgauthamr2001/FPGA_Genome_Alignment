module BandedSWAccelerator #(parameter B = 4, parameter L = 8)(
	//parameter B = 4,
	//parameter L = 8,
	input clk,
	input start,
    input [3 * L - 1 : 0] R,
    input [3 * L - 1 : 0] Q,
    output reg [3 * L + 5 : 0] R_aligned,
    output reg [3 * L + 5 : 0] Q_aligned,
	output ready,
    output [95:0] pe_mem1, 
    output [95:0] pe_mem2,
    output [95:0] pe_mem3, 
    output [95:0] pe_mem4
    
);
    
    reg [2:0] in_r; 	//2 bit input to the R shift register
    reg [2:0] in_q; 	//2 bit input to the Q shift register
	reg en_r;
	reg en_q;
	reg dir_r;
	reg dir_q;
	reg reset;
	reg pe_valid;

	reg [7:0] count1;		//Shift Counter
	reg [4:0] count2;		//indexing for Q register
	reg [4:0] count3;		//indexing for R register
    wire [11:0] out_pe;

	wire start_compute;
	reg start_traceback;
	reg stop_traceback;

    wire [3 * B - 1 : 0] R_SR;	//R shift register
	wire [3 * B - 1 : 0] Q_SR;	//Q shift register

	reg [7:0] pe1_mem[0:11];
	reg [7:0] pe2_mem[0:11];
	reg [7:0] pe3_mem[0:11];
	reg [7:0] pe4_mem[0:11];
     
    genvar j;
    for (j=0; j < 12; j=j+1) begin
        assign pe_mem1[8 * (j + 1) - 1 : 8 * j] = pe1_mem[j];
        assign pe_mem2[8 * (j + 1) - 1 : 8 * j] = pe2_mem[j];
        assign pe_mem3[8 * (j + 1) - 1 : 8 * j] = pe3_mem[j];
        assign pe_mem4[8 * (j + 1) - 1 : 8 * j] = pe4_mem[j];
    end

	wire [1:0] req_pe_id;
    wire [7:0] req_addr;
	reg [7:0] req_rel_pos;

	wire [2:0] r_aligned;
	wire [2:0] q_aligned;

	wire finish;

	reg [7:0] ctr;
    reg [7:0] pe_ctr; 

//	reg [2:0] R_reg [0:L-1];
//	reg [2:0] Q_reg [0:L-1];

    wire [3 * L - 1 : 0] Q_temp; 
    wire [3 * L - 1 : 0] R_temp; 
    
initial begin 
    count1 = 0;
    count2 = 0; 
    count3 = 0; 
end 
    
assign Q_temp = Q << count2; 
assign R_temp = R << count3; 

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
		count1 <= 0;
		count2 <= 0; 
		count3 <= 0;
		pe_valid <= 0;	
		start_traceback <= 0;	
    end
    else if(count2 < 3 * B - 1) begin
	    in_q <= Q_temp[(3*L)-1:(3*L)-3];
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
		if(count1 < B) begin
			in_q <= 0;
			en_q <= 0;
			reset <= 0;
            in_r <= R_temp[(3*L)-1:(3*L)-3];
			en_r <= 1;
			dir_r <= 1;
			dir_q <= 0;
			count1 <= count1 + 1;
			count2 <= count2; 
			count3 <= count3 + 3;
			pe_valid <= 1;
			start_traceback <= 0;
		end
        else if(count1 < 2 * L - B) begin
			if(count1 % 2 == 0) begin
                in_q <= Q_temp[(3*L)-1:(3*L)-3];
				en_q <= 1;
				reset <= 0;
				in_r <= 0;
				en_r <= 0;
				dir_r <= 1;
				dir_q <= 0;
				count1 <= count1 + 1;
				count2 <= count2 + 3; 
				count3 <= count3; 
				pe_valid <= 1;
				start_traceback <= 0;	
			end
			else begin
				in_q <= 0;
				en_q <= 0;
				reset <= 0;
                in_r <= R_temp[(3*L)-1:(3*L)-3];
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
        else if(count1 <= 2 * L - 1) begin
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
    if (count1 >= 2 & count1 < 14)
		if (pe_valid)
            pe1_mem[count1-2] <= out_pe[2:0];
    if (count1 >=3 & count1 < 15)
		if (pe_valid)
            pe2_mem[count1 - 3] <= out_pe[5:3];  
    if (count1 >=4 & count1 <16)
		if (pe_valid)
            pe3_mem[count1 - 4] <= out_pe[8:6];  
    if (count1 >=5 & count1 < 17)
		if (pe_valid)
            pe4_mem[count1 - 5] <= out_pe[11:9];   
end

			
    shift_reg r_shift(.in(in_r),.clk(clk),.en(en_r),.dir(dir_r),.out(R_SR));
    shift_reg q_shift(.in(in_q),.clk(clk),.en(en_q),.dir(dir_q),.out(Q_SR));
    pe_top pe_module(.ctr(count1 - 2'b10),.R(R_SR),.Q(Q_SR),.clk(clk),.out_pe(out_pe));

tbmodule traceback(
	.R_sub(R),		// R subsequence
    .Q_sub(Q),		// Q subsequence
    .clk(clk),
    .start_traceback(start_traceback),
	.pe_id(req_pe_id),
	.addr(req_addr),
	.rel_pos(req_rel_pos),
	.out_r(r_aligned),
	.out_q(q_aligned),
	.finish(finish) 
);

always @(*) begin
	case(req_pe_id)
	2'b00 : req_rel_pos = pe1_mem[req_addr];
	2'b01 : req_rel_pos = pe2_mem[req_addr];
	2'b10 : req_rel_pos = pe3_mem[req_addr];
	2'b11 : req_rel_pos = pe4_mem[req_addr];
	default : req_rel_pos = pe4_mem[req_addr];
	endcase
end

always @(posedge clk) begin
	if (finish)
		stop_traceback <= 1;
	else
		stop_traceback <= 0;
end

always @(posedge clk) begin
	if ((start_traceback) && (!finish) && ctr >= 6) begin
        R_aligned[ctr - 6] <= r_aligned[0];
        R_aligned[ctr - 5] <= r_aligned[1]; 
        R_aligned[ctr - 4] <= r_aligned[2]; 
        Q_aligned[ctr - 6] <= q_aligned[0];
        Q_aligned[ctr - 5] <= q_aligned[1]; 
        Q_aligned[ctr - 4] <= q_aligned[2];
		ctr <= ctr + 3;
	end
	else if((start_traceback) && (!finish))
		ctr <= ctr + 3;
	else
		ctr <= 0; 
end		
	

assign ready = stop_traceback;
endmodule
