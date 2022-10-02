/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
A subarray is a contiguous part of an array.

Example:
Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int MAX_SUM = nums[0];
    int CURR_SUM = nums[0];
    
    for(int i=1; i<nums.size(); i++){
        CURR_SUM = max(CURR_SUM + nums[i], nums[i]);
        MAX_SUM = max(MAX_SUM, CURR_SUM);
    }
        return MAX_SUM;
    }
};