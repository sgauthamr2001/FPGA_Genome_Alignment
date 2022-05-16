### Hardware Accelerator for BandedSW (Verilog HDL)

- To exploit parallelism and efficient usage of data between computations, a systolic array based architecture is adopted with 4 PE units for a bandwidth of 4.
- Temporary data between scoring and traceback phase is stored in the BRAMs/Registers. 
- Several modules above can be correlated with the schematic taken from source. 

To run the simulation following commands can be used : 
```
iverilog -o accelerator_tb -c program_file.txt
```
followed by, 
```
./accelerator_tb
```
This shall print out the aligned sub-sequences in hexadecimal, where each basepair is of 3 bits with A - 000, T - 001, G - 010, C - 011, gap - 100. 

- R sub-sequence: CCGTACTA - 011 011 010 001 000 011 001 000 - 6D10C8 
- Qsub-sequence: CAGACCTA - 011 000 010 000 011 011 001 000 - 6106C8
- R aligned: C_ GTAC_ TA - 011 100 010 001 000 011 100 001 000 - 3888708
- Q aligned: CAG_ ACCTA - 011 000 010 100 000 011 011 001 000 - 30A06C8

Hence, the expected outputs shall be 3888708 and 30A06C8, for the test input sequence being fed by the test-bench. Further two run the synthesis using yosys and post-synthesis simulation, following command are to be used: 

```
yosys synth.ys
```
followed by, 
```
iverilog -o accelerator_tb_synth -c program_file_synth.txt
```
and then, 
```
./accelerator_tb_synth
```

Schematics : 

![architecture](https://user-images.githubusercontent.com/85408861/168463388-df4f14fc-21f9-4a43-a98b-c74c235d032a.png)

PE module:

![pe_module](https://user-images.githubusercontent.com/85408861/168463410-75153e96-150e-4ea1-988b-32a35b5eff05.png)


Traceback module:

![traceback](https://user-images.githubusercontent.com/85408861/168463415-ded3ec96-b676-44fe-818c-7a409a6f7c14.png)
