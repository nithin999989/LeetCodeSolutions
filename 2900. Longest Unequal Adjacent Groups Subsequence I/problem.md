Longest Unequal Adjacent Groups Subsequence I

You are given an integer n, a 0-indexed string array words, and a 0-indexed binary array groups, both arrays having length n.

You need to select the longest subsequence from an array of indices [0, 1, ..., n - 1], such that for the subsequence denoted as [i0, i1, ..., ik - 1] having length k, groups[ij] != groups[ij + 1], for each j where 0 < j + 1 < k.

Return a string array containing the words corresponding to the indices (in order) in the selected subsequence. If there are multiple answers, return any of them.

A subsequence of an array is a new array that is formed from the original array by deleting some (possibly none) of the elements without disturbing the relative positions of the remaining elements.

Note: strings in words may be unequal in length.


Constraints:

1 <= n == words.length == groups.length <= 100
1 <= words[i].length <= 10
0 <= groups[i] < 2
words consists of distinct strings.
words[i] consists of lowercase English letters.