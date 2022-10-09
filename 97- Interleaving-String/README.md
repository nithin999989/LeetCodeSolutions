<h2><a href="https://leetcode.com/problems/interleaving-string/">97. Interleaving String</a></h2><h3>Medium</h3><hr><div>
<p>Given strings s1, s2, and s3, find whether s3 is formed by an <strong>interleaving</strong> of s1 and s2.</p> <br>
<p>An <strong>interleaving</strong> of two strings s and t is a configuration where s and t are divided into n and m <strong>non-empty</strong> substrings respectively, such that:</p>
<ul>
	<li><pre>s = s1 + s2 + ... + sn</pre></li>
	<li><pre>t = t1 + t2 + ... + tm</pre></li>
	<li><pre>|n - m| <= 1</pre></li>
	<li>The <strong>interleaving</strong> is <pre>s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...</pre></li>
</ul>
<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/09/02/interleave.jpg" style="width: 454px; height: 291px;">
<p><strong>Input: </strong></p><pre>s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"</pre>
<p><strong>Output: </strong></p><pre>true</pre>
<p><strong>Explanation: </strong></p><pre>One way to obtain s3 is: <br>Split s1 into s1 = "aa" + "bc" + "c", and s2 into s2 = "dbbc" + "a".<br>Interleaving the two splits, we get "aa" + "dbbc" + "bc" + "a" + "c" = "aadbbcbcac".<br>Since s3 can be obtained by interleaving s1 and s2, we return true.</pre>
