`timescale 1ns/1ns 

// This test bench will run for a fixed 1000 clock cycles
// Test cases are such that they should finish within this time (800 + 40)

module accelerator_tb ();    
    reg  clk, reset;    // Clock and Reset 
    // Inputs and outputs of accelerator module 
    //    wire [31:0] image, result0, result1, result2, result3, result4, result5, result6, result7, result8, result9, ctr1;

//	input start,

    initial
    begin
        $dumpfile("test.vcd");
        $dumpvars;
    end
    
    wire [23 : 0] R ;
    wire [23 : 0] Q ;
    wire [29:0] R_aligned;
    wire [29:0] Q_aligned;
    wire ready;

    wire [95:0] pe_mem1; 
    wire [95:0] pe_mem2;
    wire [95:0] pe_mem3;
    wire [95:0] pe_mem4;
    
    
    integer i;    // Clock loop variable 
    
    // Initiating accelerator module 
    
    BandedSWAccelerator a1 (
        .clk(clk),
        .start(reset),
        .R(R),
        .Q(Q),
        .R_aligned(R_aligned),
        .Q_aligned(Q_aligned),
        .ready(ready),
        .pe_mem1(pe_mem1),
        .pe_mem2(pe_mem2),
        .pe_mem3(pe_mem3),
        .pe_mem4(pe_mem4)
	);

    // Initiating the image data module
    
    xmem u2(
        //.ctr1(ctr1),
        .xdata1(R),
        .xdata2(Q)    
    );


    // Set up clock
    always #5 clk=~clk;

    initial 
        begin
            $display("RUNNING TEST");
            clk = 0;
            reset = 0;
            #3
            reset = 1;   // This is active high reset
            #6           
            reset = 0;   // Reset removed - normal functioning resumes
            
            @(posedge clk);
            for (i=0; i<1000; i=i+1) begin
                @(posedge clk);
            end

		    $display("Aligned Sequences-1 - %b , %b",$signed(R_aligned),$signed(Q_aligned));
            $display("Traceback_memory-1");
            $display("%h ", pe_mem1);
            $display("Traceback_memory-2");
            $display("%h ", pe_mem2);
            $display("Traceback_memory-3");
            $display("%h ", pe_mem3);
            $display("Traceback_memory-4");
            $display("%h ", pe_mem4);
            
//            $display("Aligned Sequences-3 - %h , %h",$signed(R_aligned[2],Q_aligned[2]));
//            $display("Aligned Sequences-4 - %h , %h",$signed(R_aligned[3],Q_aligned[3]));
//            $display("Aligned Sequences-5 - %h , %h",$signed(R_aligned[4],Q_aligned[4]));
//            $display("Aligned Sequences-6 - %h , %h",$signed(R_aligned[5],Q_aligned[5]));
//            $display("Aligned Sequences-7 - %h , %h",$signed(R_aligned[6],Q_aligned[6]));
//            $display("Aligned Sequences-8 - %h , %h",$signed(R_aligned[7],Q_aligned[7]));
//            $display("Aligned Sequences-2 - %h , %h",$signed(result8));
//            $display("Aligned Sequences-2 - %h , %h",$signed(result9));

            $finish;	
        end
    
endmodule    // Test bench 
