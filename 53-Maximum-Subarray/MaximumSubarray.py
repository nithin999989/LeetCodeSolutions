def maxSubArray(nums):
    maxSum = nums[0]
    maxSoFar = nums[0]
    
    for num in nums[1:]:
        maxSum = max(num, maxSum + num)
        maxSoFar = max(maxSum, maxSoFar)
        
    return maxSoFar