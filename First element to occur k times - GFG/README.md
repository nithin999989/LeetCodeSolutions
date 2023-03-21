# First element to occur k times
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array of <strong>N</strong> integers.&nbsp;Find the first element that occurs at least&nbsp;<strong>K</strong> number of times.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
N = 7, K = 2
A[] = {1, 7, 4, 3, 4, 8, 7}
<strong>Output :</strong>
4
<strong>Explanation:</strong>
Both 7 and 4 occur 2 times. 
But 4 is first that occurs 2 times
As at <strong>index = 4</strong>, 4 has occurred 
atleast 2 times whereas at <strong>index = 6</strong>,
7 has occurred atleast 2 times.
</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>firstElementKTime()</strong>&nbsp;which takes the array <strong>A[]</strong>, its size <strong>N,&nbsp;</strong>and an integer <strong>K </strong>as inputs and <strong>returns</strong> the required answer. If the answer is not present in the array, return <strong>-1</strong>.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= <strong>N</strong> &lt;= 10<sup>4</sup><br>
1 &lt;= <strong>K</strong> &lt;= 100<br>
1&lt;= <strong>A[i]</strong> &lt;= 200</span></p>
</div>