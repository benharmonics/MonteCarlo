# MonteCarlo
Monte Carlo simulations to estimate the value of pi in several languages (Includes C, Julia, Python)

<h3><i><b>What is Monte Carlo?</b></i></h3>
<h4><i>Using Statistics in Numerical Analysis</h4></i>

<p>Imagine you are looking at the first quadrant of the XY plane; that is, where X>0 and Y>0. We are going to focus on the first unit square of the first quadrant; that is, 0<=X<=1 and 0<=Y<=1.</p>
<p>Now, imagine the first quadrant of the unit circle inscribed on this first unit square: the edge of the circle starts at the point (1,0), and sweeps across to the point (0,1), of course maintaining the same radius length 1. In the area we are describing, a <i>quarter</i> of the unit circle is inscribed</p>
<p>If we pick <b>random</b> points within the area, the ratio of points which randomly fall within the inscribed circle relative to the total points should be roughly the same as the ratio between the <i>area</i> of the inscribed quarter unit circle and the <i>area</i> of the unit square.</p>
<p>Theoretically, we know the area of a quarter circle is (1/4)*pi*r^2, thus for the unit circle (where r=1) the area of the quarter circle is pi/4; and the area of the unit square in the first quadrant is 1*1=1, so the (approximately) equivalent ratios we have are:</p>
<p><b>POINTS_IN_CIRCLE:TOTAL_POINTS ~= pi/4:1</b></p>
<p>Or equivalently:</p>
<p><b>pi ~= 4*(POINTS_IN_CIRCLE/TOTAL_POINTS)</b></p>
<p>So, for every iteration, we will have to draw two random numbers to create a point (X,Y), then we will check to see if this point lies within our inscribed quarter-unit circle. Keeping track of how many points "hit the target" and the total number of points, we can estimate pi with the above formula using a <i>very</i> large number of random (X,Y) points (on the order of 10<sup>9</sup>).</p>

<h3>piestimate.c</h3>

<p>Note that you have to compile the program with gcc to run it as an exe. In the terminal, check</p>

<code>gcc --version</code>

<p>to see if you have gcc installed. If this doesn't error, cd into the directory where you have piestimate.c and compile with</p>

<code>gcc piestimate.c -o piestimate</code>

<h3>piestimate.py</h3>

<p>With Python installed, enter the terminal, cd to the directory in which the file is located and simply run <code>python piestimate.py</code>.<br>
  Note that Python is <i><b>much</b></i> slower than C and especially Julia. Thus, the number of iterations is  much lower.</p>

<h3>piestimate.jl</h3>
<p>Note that you will need to install Julia to run this script. In the terminal, check with</p>

<code>julia --version</code>

<p>to see if you have Julia installed. Once you do, simply run the file with</p>

<code>julia piestimate.jl</code>

<p>while in the directory where the file is located.<br>
Amazing how quickly the program runs, even compared to the parallel program in C!</p>


