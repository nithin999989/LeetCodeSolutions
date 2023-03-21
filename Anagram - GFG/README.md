# Anagram
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two strings&nbsp;<strong>a&nbsp;</strong>and&nbsp;<strong>b&nbsp;</strong>consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other.</span></p>

<p><span style="font-size:18px"><strong>Note:-</strong> </span></p>

<ul>
	<li>
	<p><span style="font-size:18px">If the strings are anagrams you have to <strong>return True or else return False</strong></span></p>
	</li>
	<li>
	<p><span style="font-size:18px"><strong>|s| </strong>represents the length of string s.</span></p>
	</li>
</ul>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>a = geeksforgeeks, b = forgeeksgeeks
<strong>Output: </strong>YES
<strong>Explanation: </strong>Both the string have same characters with
        same frequency. So, both are anagrams.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>a = allergy, b = allergic
<strong>Output: </strong>NO
<strong>Explanation: </strong>Characters in both the strings are 
&nbsp;       not same, so they are not anagrams.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong></span><br>
<span style="font-size:18px">You don't need to read input or print anything. Your&nbsp;</span><span style="font-size:18px">task is to complete the function&nbsp;<strong>isAnagram()</strong> which takes the string <strong>a</strong> and string <strong>b</strong> as input parameter and check if the two strings are an anagram of each other. The function returns true if the strings are anagram else it returns false.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>O(|a|+|b|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(Number of distinct characters).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |a|,|b| ≤ 10<sup>5</sup></span></p>
</div>