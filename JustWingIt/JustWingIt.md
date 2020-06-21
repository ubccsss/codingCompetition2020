Pizza's usually quite delicious and all, but even the best parlor's 'za can get quite tiring sometimes.
Luckily, they also sell chicken wings!

You and your friends decide you want to have <i>N</i> of Mr. Ray's chicken wings-- no more, no less.
Unfortunately though, the wings only come in boxes of 7, or buckets of 11. Is it possible to order exactly what you want?

<b>Input:</b> <ul>
<li>A line containing a single integer <i>N</i>: the number of wings to order.
</ul>

<b>Output:</b> <ul>
<li>A line containing the word <code>Yes</code> if it is possible to order exactly <i>N</i> wings, or <code>No</code> otherwise. </li>

<b>Ex.<br> In:</b>
<code>29</code>

<b>Out: </b>
<code>Yes</code>

<br>
<b>In:</b>
<code>45</code>

<b>Out: </b>
<code>No</code>

# Description

A solution always exists for sufficiently large n (by Bezout/some CS 121 stuff).
For smaller n, perform a knapsack-like DP.
