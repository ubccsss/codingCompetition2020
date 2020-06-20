Santa ordered pizza home. However when the courier delivered the pizza, he was very upset, because several pieces of sausage lay on the crust, and he does not really like the crust.

The pizza is a circle of radius <i>R</i> centered on the origin. Pizza consists of the main part — circle of radius <i>R - D</i> with center at the origin, and crust around the main part of the width <i>D</i>. Slices of sausage are also circles.

Santa asks you to help determine the number of pieces of sausage caught on the crust. A piece of sausage got on the crust, if it completely lies on the crust.

<b>Input:</b> <ul><li>The radius of the whole pizza <i>R</i>, the width of the crust <i>D</i>, and the number of sausage pieces on the pizza <i>N</i>, separated by spaces on a single line.</li>
<li><i>N</i> lines follow, describing each slice of sausage: where <i>x, y, r</i> describes a slice of sausage at (<i>x, y</i>) with radius <i>r</i>.</li>
</ul>

<b>Output:</b> <ul><li>A single line containing the number of sausage pieces completely lying on the crust.</li></ul>

<b>Ex.<br> In:</b>
<code>8 4 7<br>
7 8 1<br>
-7 3 2<br>
0 2 1<br>
0 -2 2<br>
-3 -3 1<br>
0 6 2<br>
5 3 1</code><br>
<b>Out: </b>
<code>2</code>


<br>
<b>In:</b>
<code>10 8 4 <br>
0 0 9 <br>
0 0 10 <br>
1 0 1 <br>
1 0 2
</code>

<b>Out: </b>
<code>0</code>
