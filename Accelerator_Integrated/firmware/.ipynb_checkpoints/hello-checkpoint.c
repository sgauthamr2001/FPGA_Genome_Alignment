// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

#include "firmware.h"
#include "stats_helper.c"    // Include the stats helper functions up front so they can also be used

// Defining base address for various signals/data used
#define R_base 0x30000000
#define Q_base 0x31000000
#define READY 0x32000000
#define R_align 0x33000000
#define Q_align 0x34000000
#define RESET 0x35000000
#define START_SIG 0x01
#define TIMEOUT 1000

void R_Write(int x);
void Q_Write(int x);
void StartAndWait(void);
int R_GetResult(void);
int Q_GetResult(void);

void R_Write(int x)
{
    int w_start = get_num_cycles();
    volatile int *p = (int *)R_base;
    *p = x;
    int w_end = get_num_cycles();
    print_str("Completed writing R to accelerator input in ");
	print_dec(w_end - w_start);
    print_str(" cycles.\n");
}

void Q_Write(int x)
{
    int w_start = get_num_cycles();
    volatile int *p = (int *)Q_base;
    *p = x;
    int w_end = get_num_cycles();
    print_str("Completed writing Q to accelerator input in ");
	print_dec(w_end - w_start);
    print_str(" cycles.\n");
}


void StartAndWait(void)
{
    print_str("Starting BSW.\n");
    int t_start = get_num_cycles();
	volatile int *p = (int *)RESET;
	// Set the "reset" signal to 1 

    *p = START_SIG; 

	// Remove the reset signal.  Since each instruction anyway takes
	// multiple cycles, the reset will be high for at least one clock
	// which is enough
	*p = 0;
    
	// Keep reading back from READY and check if the LSB is set to 1. 
	// If the "rdy" signal is connected to the LSB, this should happen
	// after the forward pass is complete, shall print out incase of 
    // TIMEOUT.
    
    p = (int *)READY;
	bool rdy = false;
	int count = 0;
	while (!rdy && (count < TIMEOUT)){
        volatile int x = (*p); 
            if ((x & 0x01) == 1) rdy = true;
                count ++;
	}

    if (count == TIMEOUT){
		print_str("TIMED OUT: did not get a 'rdy' signal back!");
	}
    
    int t_end = get_num_cycles();
	print_str("Completed BSW in ");
	print_dec(t_end - t_start);
	print_str(" cycles.\n");
}

void hello(void)
{
    int R = 0x006D10C8;
    int Q = 0x006106C8;
    
    R_Write(R);                       // Writing R to input of the accelerator 
    Q_Write(Q);                       // Writing Q to input of the accelerator 
	StartAndWait();                   // Waiting for ready signal from the accelerator 
    
    // Reading results from the accelertor 
    
    print_str("Reading results from accelerator output.\n");
    int r_start = get_num_cycles();
    
    volatile int *p = (int *)R_align;    
    int R_output = *p;     
    
    p = (int *)Q_align;
    int Q_output = *p;     
    
    int r_end = get_num_cycles();
	print_str("Completed reading in ");
	print_dec(r_end - r_start);
	print_str(" cycles.\n");
    
    // Printing the results 
    
    print_str("Printing the aligned sequences in hex.\n");
    print_hex(R_output,8);
    print_str("\n");
    print_hex(Q_output,8);
    print_str("\n");
}