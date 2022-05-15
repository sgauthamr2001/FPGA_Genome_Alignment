### Integrated Hardware Accelerator for BandedSW with picorv32 RISC-V processor(Verilog HDL)

The developed hardware accelerator for the BandedSW function (implementing scoring, traceback, and alignment of subsequences of length 8, with a band of 4) was integrated with the picorv32 RISC-V processor for profiling and analysis. The axi4 bus was suitably modified for a memory mapped read/ write to the peripheral accelerator.

The subsequences to be aligned are written to the corresponding addresses. Subsequently, the start signal for the accelerator is asserted and deasserted, signalling the accelerator to start the computations. The code waits for a ready signal from the accelerator, which signals that the sequences have been aligned. The aligned sequences are read in from the corresponding addresses, and displayed on the command line.

To run the simulation run : 
```
make
```
This shall print out the aligned sub-sequences in hexadecimal, and also the cycle counts taken for various parts of the integration.


Schematic : 

![architecture](https://user-images.githubusercontent.com/85408861/168463388-df4f14fc-21f9-4a43-a98b-c74c235d032a.png)

PE module:

![pe_module](https://user-images.githubusercontent.com/85408861/168463410-75153e96-150e-4ea1-988b-32a35b5eff05.png)


Traceback module:

![traceback](https://user-images.githubusercontent.com/85408861/168463415-ded3ec96-b676-44fe-818c-7a409a6f7c14.png)

The Accelerator design was synthesized in Vivado using a ZYNC 7000 board and the hardware utilization report can be found in (Hardware_Utilization)(https://github.com/sgauthamr2001/FPGA_Genome_Alignment/blob/main/Accelerator_Integrated/BSW_acc_utilization_synth.rpt)
