### Baseline Software implementation

<p align = "justify"> The Banded Smith Waterman algorithm has been implemented in software. Firstly, given a large sequence, the same is broken down into several small sub-sequences and the BandedSW function in Python implements the local alignment for these sub-sequences. For alignment between the sub-sequences a dynamic overlapping heuristic has been used. The implementation in Python is profiled to identify the bottleneck. The Jupyter Notebook for the Python code has been provided, which could be run on Google Colab platform. </p>

<p align = "justify"> To implement a software baseline for the bottleneck, the bandedSW function has been implemented in C and the same is simulated in a PicoRV32 core, to which the accelerator has been connected to at a later stage for profiling the hardware.  </p> 

The folder [baseline_C](./baseline_C/) contains this implementation

<p align = "justify"> The Adaptively Banded Smith Waterman algorithm as proposed by Liao et al. in their paper is as follows. The .ipynb notebook completely implements this algorithm.
</p>  

![Screenshot from 2022-05-16 22-03-15](https://user-images.githubusercontent.com/62927400/168644368-f39aab34-c815-4e76-a359-81cb99dd50b3.png)
