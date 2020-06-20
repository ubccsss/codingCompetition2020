Mr. Ray's Pizzeria is running a bit low on toppings, partly due to supply chain collapse and partly due to an inexplicable increase in popular demand for pizza. Maybe people just don't like cooking?

On a particular working day at Mr. Ray's Pizzeria, he receives a number of take-out, delivery, and bake-at-home orders. Each order requires its own set of toppings, each of which Mr. Ray only has a fixed number at the start of the day.

Given the list of toppings (and their quantity) in Mr. Ray's pantry, find the maximum amount of orders he can fulfill.

<b>Input:</b> <ul> <li>The number of different toppings, <i>I</i>, and the number of orders, <i>O</i> on a single line, separated by a space.</li>
<li>A single line with <i>I</i> integers: the quantity of each topping available.
<li><i>O</i> lines each consisting of <i>I</i> integers: the number of each topping required to fill that specific order. </li>
</ul>

<b>Output:</b> The maximum number of orders which can be fulfilled.


<b>Ex.<br> In:</b>
<code>2 2<br>
1 1<br>
1 0<br>
0 1</code><br>

<b>Out:</b>
<code>2</code>


<b>In:</b>
<code>3 4<br>
2 1 3<br>
1 0 1<br>
1 1 0<br>
0 0 2<br>
0 1 1</code><br>

<b>Out: </b>
<code>3</code>