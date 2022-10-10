'''

Given an array of positive integers nums and a positive integer target, return the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. If there is no such subarray, return 0 instead.

 

Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1
Example 3:

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0
 

Constraints:

1 <= target <= 109

'''

# Solution 1: Using Binary Search - TC: O(nlogn) and SC - O(1)

class Solution:
    def utils(self,arr,k,n):

        maxi = 0
        i = j = s= 0
        while j < n:
            s += arr[j] 
            if j-i+1 < k:
                j+=1
            elif j-i+1 == k:
                maxi = max(maxi,s)
                s -= arr[i] 
                i+=1 
                j+=1 
        
        return maxi

    def minSubArrayLen(self, target: int, nums: List[int]) -> int:

        n = len(nums)
        l,h = 1,n+1
        f = False
        while l<h:
            mid = (l+h)//2
            if self.utils(nums,mid,n) >= target:
                f = True
                h = mid
            else:
                l = mid+1 
        
        if f == True:
            return h
        else:
            return 0

# Solution 2: Using Sliding Window - Tc: O(n) and SC: O(1)

class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        n = len(nums)
        i = j = s = 0
        ans = float('inf')
        while j < n:
            s += nums[j]
            while s >= target:
                ans = min(ans,j-i+1)
                s -= nums[i]
                i+=1
            j+=1
        if ans == float('inf'):
            return 0
        return ans