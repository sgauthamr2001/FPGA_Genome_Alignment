//                              -*- Mode: Verilog -*-
// Filename        : xmem.v
// Description     : Module to send in images to accelerator for testing  
// Purpose         : Feeds input to accelerator based on address pointed to by counter 

module xmem (
//    input [31:0] ctr1,
    output [23:0] xdata1 ,
    output [23:0] xdata2 
);
    
    reg [23:0] mem[0:1023];    // Define a 1-K location memory (4KB)
    initial 
        begin 
            $readmemh({"xdata.mem"},mem); 
        end
    assign xdata1 = mem[0];    // Asynchornous read, register already used in systolic module 
    assign xdata2 = mem[1];
    
endmodule