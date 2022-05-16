/*                          -*- Mode: Verilog -*-

 * Filename : accelerator.v
 * Description : Test bench of the accelerator module.

 */

`timescale 1ns/1ns 

// This test bench will run for a fixed 100 clock cycles
// Test case is such that they should finish within this time. 

module accelerator_tb ();    
    reg  clk, reset;    // Clock and Reset. 

    // File to store the waveforms needed for de-bugging. 

    initial begin
        $dumpfile("test_synth.vcd");
        $dumpvars;
    end

    // Inputs and outputs to the accelerator module.

    wire [23:0] R;
    wire [23:0] Q;
    wire [29:0] R_aligned;
    wire [29:0] Q_aligned;
    wire ready;

    wire [95:0] pe_mem1; 
    wire [95:0] pe_mem2;
    wire [95:0] pe_mem3;
    wire [95:0] pe_mem4;
    
    integer i;    // Clock loop variable 

    // Input values of the base-pairs. 
    // A - 0, T - 1, G - 2, C - 3. 

    assign R = 24'h6d10c8;
    assign Q = 24'h6106c8;
    
    // Initiating accelerator module.

    bsw_acc a1 (
        .clk(clk),
        .start(reset),
        .R(R),
        .Q(Q),
        .R_aligned(R_aligned),
        .Q_aligned(Q_aligned),
        .ready(ready)

        // Needed to de-bug the traceback memory.

        /*
        .pe_mem1(pe_mem1),     
        .pe_mem2(pe_mem2),
        .pe_mem3(pe_mem3),
        .pe_mem4(pe_mem4)
        */

	);

    // Set up clock
    always #5 clk=~clk;

    initial begin
        $display("RUNNING TEST");
        clk = 0;
        reset = 0;
        #3
        reset = 1;   // This is active high reset
        #6           
        reset = 0;   // Reset removed - normal functioning resumes
            
        @(posedge clk);
        for (i=0; i<100; i=i+1) begin
            @(posedge clk);
        end

        $display("Aligned Sequence - 1 : %h", $signed(R_aligned[26:0]));
        $display("Aligned Sequence - 2 : %h", $signed(Q_aligned[26:0]));

        /*
        $display("Traceback_memory-1");
        $display("%h ", pe_mem1);
        $display("Traceback_memory-2");
        $display("%h ", pe_mem2);
        $display("Traceback_memory-3");
        $display("%h ", pe_mem3);
        $display("Traceback_memory-4");
        $display("%h ", pe_mem4);
        */ 

        $finish;	
    end
    
endmodule    // Test bench 
