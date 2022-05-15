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

![alt text](https://github.com/sgauthamr2001/FPGA_Genome_Alignment/blob/main/Hardware_Accelerator/schematic.png)
