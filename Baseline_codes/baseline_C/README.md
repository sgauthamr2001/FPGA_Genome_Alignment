
### Banded Smith-Waterman in C 

This is a baseline software implementation of the Banded Smith-Waterman Algorithm, for inference on PicoRV32 core. This is a forked repository of [PicoRV32](https://github.com/YosysHQ/picorv32). 

#### Problem statement

<p align = "justify"> The implementation problem is to align two sub-sequences of given length using the traditional Smith-Waterman Algorithm. But since, due the advancement of sequencing technologies, in most of the cases the alignment lies along the diagonal band, hence the alogirthm is modified to perform scoring and traceback in a band around the diagonal region and the same is implemented in software. The algorithm is of complexity O(mn), where m and n are the lengths of sub-sequences, and the scoring along the anti-diagonal regions are independent, these shall be utilised while builing the hardware. In software, the socring is done sequentially post-which traceback phase starts which is of complexity O(L), where L is the length of alignment. </p>

<p align = "justify"> The input sequences are R, CCGTACTA and Q, CAGACCTA, where the following encoding is used for BPs, A: 1, T: 2, G: 3, C: 4 in software and a gap is represented by a 4. The result of the alignment is  C_GTAC_TA and CAG_ACCTA, the same has been obtained on simulating the software on core using verilator. All the temporary variables for the given problem size are stored on stack, and manual memory allocation is required if the size of the sub-sequences increases. </p>

#### Simulation 

<p align = "justify"> The baseline code has been written in the 'hello.c' file. The input is to be changed manually in the code 'hello.c', default values are used for simulation. </p>

<p align = "justify"> To run the simulations, just type the below command. </p>

```sh
$ make 
```

The results obtained are printed out, and the same encoding defined previously for the base-pairs is used here as well.
