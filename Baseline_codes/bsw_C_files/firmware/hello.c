// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

#include "firmware.h"
// Include the stats helper functions up front so they can also be used
// inside the nj* functions to profile if needed
#include "stats_helper.c"

#define L 9        // Length of sequence + 1
#define B 4        // Bandwidth of the band 

void hello(void)
{
	int score_matrix[100];              // Array to store the score matrix 
    int trace_matrix[100];              // Array to store the pointers for traceback 

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            score_matrix[i * L + j] = 0;        // Initialising score_matrix to 0
            trace_matrix[i * L + j] = 0;        // Initialising trace_matrix to 0 
        }
    }

    // The following encoding is used for Genome Sequences,
    // A - 0,
    // T - 1,
    // G - 2,
    // C - 3.
    
    int seq1[8];             // Stores reference sequence 
    int seq2[8];             // Stores query sequence 
    
    
    // Initialising sequence - 1 as: CCGTACTA
    
    seq1[0] = 3;            
    seq1[1] = 3;
    seq1[2] = 2;
    seq1[3] = 1;
    seq1[4] = 0;
    seq1[5] = 3;
    seq1[6] = 1;
    seq1[7] = 0; 
    
    // Initialising sequence - 2 as: CAGACCTA
    
    seq2[0] = 3;
    seq2[1] = 0;
    seq2[2] = 2;
    seq2[3] = 0;
    seq2[4] = 3;
    seq2[5] = 3;
    seq2[6] = 1;
    seq2[7] = 0;

    int d_score, v_score, h_score;        // Temporary variable to store score data 
    
    print_str("Starting the alignment.\n");
    int t_start = get_num_cycles();
    
    // Starting the score accumulation 

    for(int j = 1; j < L; j++){
        
        int lower = (0 > (j - B)) ? 0 : (j - B);        // Lower limit of band
        int upper = ((j + B) > L) ? L : (j + B);        // Upper limit of band 
        
        for(int i = lower + 1; i < upper; i++){
            
            d_score = score_matrix[i * L + j - 1 - L] + (seq1[i - 1] == seq2[j - 1] ? 2 : -1);      // Match, Mis-Match
            v_score = score_matrix[i * L + j - L] - 1;                                              // Insertion 
            h_score = score_matrix[i * L + j - 1] - 1;                                              // Deletion 

            
            // Finding the maximum score and correspoding pointer 
            
            if((d_score > v_score) & (d_score > h_score) & (d_score > 0)){
                score_matrix[i * L + j] = d_score;  
                trace_matrix[i * L + j] = 3;                                   // 3 for match, mis-match
            } 
            else if((v_score > h_score) & (v_score > 0)){
                score_matrix[i * L + j] = v_score; 
                trace_matrix[i * L + j] = 2;                                   // 2 for insertion 
            }  
            else if((h_score > 0)){
                score_matrix[i * L + j] = h_score; 
                trace_matrix[i * L + j] = 1;                                   // 1 for deletion 
            }
            else{
                score_matrix[i * L + j] = 0; 
                trace_matrix[i * L + j] = 0;                                   // 0 for null-pointer 
            }
        }
    }
    
    // Variable decleration for back-tracing 
    
    int align_seq1[17]; 
    int align_seq2[17]; 
    int temp1 = 9; 
    int temp2 = 9; 

    int score_sub = 0; 
    int i = L - 1;
    int j = L - 1; 
    int ctr = 0;

    // Start of back-tracing 
    
    while(trace_matrix[i * L + j] != 0){                      // Stops on reaching the null-pointer 
        if(trace_matrix[i * L + j] == 3){                     // Match, Mis-Match
            temp1 = seq1[i - 1]; 
            temp2 = seq2[j - 1]; 
            i -= 1;
            j -= 1;
            score_sub += score_matrix[i * L + j]; 
        }
        else if(trace_matrix[i * L + j] == 2){                // Insertion  
            temp1 = seq1[i - 1]; 
            temp2 = 4; 
            i -= 1; 
            score_sub += score_matrix[i * L + j]; 
        }
        else if(trace_matrix[i * L + j] == 1){                // Deletion 
            temp1 = 4; 
            temp2 = seq2[j - 1]; 
            j -= 1; 
            score_sub += score_matrix[i * L + j]; 
        }
        align_seq1[ctr] = temp1;                              // Appending data/gap to sequence - 1 
        align_seq2[ctr] = temp2;                              // Appending data/gap to sequence - 2
        ctr += 1; 
    }
    
    int t_end  = get_num_cycles();
    
    // Priniting the cycle count 
    
    print_str("Completed in ");
	print_dec(t_end - t_start); 
	print_str(" cycles.\n");
    
    // Printing the aligned sequence - 1
    
    print_str("Aligned Sequence - 1: ");
    for(int k = 8; k >= 0; k--)
    {
        print_dec(align_seq1[k]);    
    }
    print_str("\n"); 
    
    // Printing the aligned sequence - 2 
    
    print_str("Aligned Sequence - 2: ");
    for(int k = 8; k >= 0; k--)
    {
        print_dec(align_seq2[k]);    
    }   
    print_str("\n");
}
