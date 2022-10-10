<h2><a href = "https://leetcode.com/problems/happy-number/"></a></h2> <h3>Easy</h3>
Write an algorithm to determine if a number n is happy.

A <strong>happy number</strong> is a number defined by the following process:

<ul>
<li>Starting with any positive integer, replace the number by the sum of the squares of its digits.</li>
<li>Repeat the process until the number equals 1 (where it will stay), or it <strong>loops endlessly in a cycle </strong>which does not include 1.</li>
<li>Those numbers for which this process ends in 1 are happy.</li>
</ul>

Return true if n is a happy number, and false if not.

 

<strong>Example 1:</strong>

Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

<strong>Example 2:</strong>

Input: n = 2
Output: false
 

<strong>Constraints:</strong>
<ul>
    <li>
    1 <= n <= 2^31 - 1
    </li>
</ul>
