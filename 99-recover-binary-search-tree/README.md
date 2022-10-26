<h2><a href="https://leetcode.com/problems/validate-binary-search-tree/">99. Recover Binary Search Tree
</a></h2><h3>Medium</h3><hr><div><p>you are given the<code>root</code> of a binary tree(BST), <em>where the values of exactly two nodes of the tree were swapped by mistake. Recover the tree without changing its structure.</em>.</p>

<p>&nbsp;</p>
<p><strong>Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/28/recover1.jpg" style="width: 302px; height: 182px;">
<pre><strong>Input:</strong> root = [1,3,null,null,2]
<strong>Output:</strong>  [3,1,null,null,2]
</pre>

<p><strong>Example 2:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2020/10/28/recover2.jpg" style="width: 422px; height: 292px;">
<pre><strong>Input:</strong> root = [3,1,4,null,null,2]
<strong>Output:</strong> [2,1,4,null,null,3]
<strong>Explanation:</strong> 2 cannot be in the right subtree of 3 because 2 < 3. Swapping 2 and 3 makes the BST valid.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[2, 10<sup>4</sup>]</code>.</li>
	<li><code>-2<sup>31</sup> &lt;= Node.val &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>
