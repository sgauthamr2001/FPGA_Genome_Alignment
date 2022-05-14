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
    volatile int *p = (int *)R_base;
    *p = x;
}

void Q_Write(int x)
{
    volatile int *p = (int *)Q_base;
    *p = x;
}

void StartAndWait(void)
{
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
    print_str("Accelerator started \n");
    
    p = (int *)READY;
//	bool rdy = false;
	int count = 0;
//	while (!rdy && (count < TIMEOUT)) {
	while (count == TIMEOUT) {
//    volatile int x = (*p); // read from READY
//		if ((x & 0x01) == 1) rdy = true;
		count ++;
	}
/*
    if (count == TIMEOUT) {
		print_str("TIMED OUT: did not get a 'rdy' signal back!");
	}
*/
    
}

int R_GetResult(void)
{
    volatile int *p = (int *)R_align;
    print_str("Read in R successfully \n");
    return (*p);
}

int Q_GetResult(void)
{
    volatile int *p = (int *)Q_align;
    print_str("Read in Q successfully \n");    
    return (*p);
}

void hello(void)
{
    int R = 0x006D10C8;
    int Q = 0x006106C8;
    int w_start = get_num_cycles();
    R_Write(R);
    Q_Write(Q);
    int w_end = get_num_cycles();
    print_str("Completed writing data to accelerator in ");
	print_dec(w_end - w_start);
	print_str(" cycles.\n");
    print_str("Starting BSW.\n");
    int t_start = get_num_cycles();
	StartAndWait();
    int t_end = get_num_cycles();
	print_str("Completed BSW in ");
	print_dec(t_end - t_start);
	print_str(" cycles.\n");
//    int R_output = R_GetResult();
    int Q_output = Q_GetResult();
    print_str("Printing the aligned sequences in hex.\n");
    print_hex(*(int *)R_align,8);
    print_str("\n");
    print_hex(Q_output,8);
    print_str("\n");
}