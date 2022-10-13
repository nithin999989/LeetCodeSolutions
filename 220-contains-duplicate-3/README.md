You are given an integer array nums and two integers indexDiff and valueDiff.

Find a pair of indices (i, j) such that:

i != j,
abs(i - j) <= indexDiff.
abs(nums[i] - nums[j]) <= valueDiff, and


Return true if such pair exists or false otherwise.


Example 1:

Input: nums = [1,2,3,1], indexDiff = 3, valueDiff = 0
Output: true

Example 2:

Input: nums = [1,0,1,1], indexDiff = 1, valueDiff = 2
Output: true

Example 3:

Input: nums = [1,5,9,1,5,9], indexDiff = 2, valueDiff = 3
Output: false

 