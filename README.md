# FPGA_Genome_Alignment

### EE5332, Mapping DSP Algorithms to Architectures, Course Project, Jan - May 2022

#### Primary Reference Paper
Adaptively Banded Smith-Waterman Algorithm for Long Reads and its Hardware Accelerator, Liao et. al.

[Paper can be accessed here](https://ieeexplore.ieee.org/document/8445105) 

#### Group Members
- Sai Gautham Ravipati EE19B053
- Shashank Nag EE19B118
- Vishnu Varma V EE19B059

#### Brief Description 

<p align = "justify"> The genome sequence is the sequence of base pairs that constitute the DNA strands. The sequencers that read the DNA strands generate short-read sequences, which have to be subsequently aligned to a reference genome. Several algorithms are prevalent, which perform this task of aligning two sequences, and the Smith-Waterman algorithm is one of the most commmon one. A regular Smith-Waterman algorithm based alignment performs the computation with a time complexity of O(mn) - where m & n are the sequence lengths. A variant of this is the Banded Smith-Waterman algorithm, which computes the score matrix along a band around the diagonal, which provides optimizations in terms of computation and backtracing. The algorithm aligns the read subsequences to the target subsequences, using a seed and extend approach - i.e., small subsequences are aligned at a time. </p>

<p align = "justify"> In this project, we review the paper by Liao et.al., which claims to be one of the first to propose a hardware design for the BandedSmithWaterman algorithm, and to implement the traceback phase on hardware. We implement the algorithm given in the paper in Python, and analyze it to identify the bottlenecks. Subsequently, we built the accelerator in Verilog, following the architecture from source, to parallely compute the score matrices, and to implement the traceback phase. We integrate this accelerator with the picorv32 RISC-V processor to analyze the access dependencies and the cycle counts so involved. </p>


#### Baseline Software Implementation

<p align = "justify"> A complete software baseline Python code was developed and profiled using the Google Colab platform. We used this primarily to identify the bottlenecks, and not as a metric of comparison with the hardware implementation. </p>

More details and the corresponding code can be found in the folder [Baseline_codes](./Baseline_codes/).

#### Hardware Accelerator

A hardware accelerator was developed based on the architecture proposed in the paper. The standalone accelerator and its testbench can be found in the folder [Hardware_Accelerator](./Hardware_Accelerator/).

#### Hardware Accelerator integrated with picorv32

The developed hardware accelerator is integrated with the picorv32 processor to profile and analyze the dependencies involved. More details on this can be found in the folder [Accelerator_Integrated](./Accelerator_Integrated/).


