Having been put out of school and out of a job, you decide to take a shot at working with PoorBash, delivering pizzas for the local Mr.Ray's. The good news is he's got a lot of customers. The bad news is... he's got a lot of customers.

Mr. Ray has baked a humongous stack of pizza for you to deliver, and you are contractually obligated to go around to all of their destinations, though not necessarily in order. As you are footing your own fuel costs, however, you would like to drive as little as possible. Note: for all intents and purposes you live in a city with a perfectly square grid for streets, in which you start at (0,0). You may end wherever you wish.

<b>Input:</b> <ul>
<li>A line containing a single integer <i>N</i>: the number of deliveries you must make.
<li><i>N</i> lines follow, each containing two (possibly negative) integers <i>X</i> and <i>Y</i>, where (<i>X</i>, <i>Y</i>) is the location of the <i>i</i>-th order.</li>
</ul>

<b>Output:</b> <ul>
<li>A line containing <i>N</i> ordinal numbers: an optimal order to deliver each pizza.</li>
<li>A line containing a single integer: the total distance you need to drive.</li></ul>

<b>Ex.<br> In:</b>
<code>3<br>
0 1<br>
1 0<br>
1 1<br></code>

<b>Out: </b>
<code>1 3 2 <br>3</code>


<b><br> In:</b>
<code>5<br>
1 2<br>
-3 3<br>
2 -2<br>
0 1<br>
-3 -3<br></code>

<b>Out: </b>
<code>4 1 3 5 2<br>20</code>