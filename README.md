# MonteCarlo
Monte Carlo simulations to estimate the value of pi in several languages (Includes C, Julia)

<h3>piestimate.c</h3>

<p>Note that you have to compile the program with gcc to run it as an exe. In the terminal, check</p>

<code>gcc --version</code>

<p>to see if you have gcc installed. If this doesn't error, cd into the directory where you have piestimate.c and compile with</p>

<code>gcc piestimate.c -o piestimate</code>

<h3>piestimate.py</h3>

<p>With Python installed, enter the terminal, cd to the directory in which the file is located and simply run <code>python piestimate.py</code>.<br>
  Note that Python is <i><b>much</b></i> slower than C and especially Julia. Thus, the number of iterations is  much lower.</p>

<h3>piestimate.jl</h3>
<p>Note that you will need the Julia REPL to run this script. In the terminal, check with</p>

<code>julia --version</code>

<p>to see if you have Julia installed. If you do, simply run the file with</p>

<code>julia piestimate.jl</code>

<p>while in the directory where the file is located.<br>
Note how the speed boost, even compared to the parallel program in C!</p>


