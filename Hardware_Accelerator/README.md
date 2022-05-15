### Hardware Accelerator for BandedSW (Verilog HDL)

- To exploit parallelism and efficient usage of data between computations, a systolic array based architecture is adopted with 4 PE units for a bandwidth of 4. 
- Temporary data between scoring and traceback phase is stored in the BRAMs. 
- Several modules above can be correlated with the schematic taken from source. 

To run the simulation following commands can be used : 
```
iverilog -o accelerator_tb -c program_file.txt
```
followed by, 
```
./accelerator_tb
```
This shall print out the aligned sub-sequences in hexadecimal.

Schematic : 

![architecture](https://user-images.githubusercontent.com/85408861/168463388-df4f14fc-21f9-4a43-a98b-c74c235d032a.png)

PE module:

![pe_module](https://user-images.githubusercontent.com/85408861/168463410-75153e96-150e-4ea1-988b-32a35b5eff05.png)


Traceback module:

![traceback](https://user-images.githubusercontent.com/85408861/168463415-ded3ec96-b676-44fe-818c-7a409a6f7c14.png)
