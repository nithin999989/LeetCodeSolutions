def rob(nums):
    def rob_helper(nums):
        n = len(nums)
        if n == 0:
            return 0
        if n == 1:
            return nums[0]
        if n == 2:
            return max(nums[0], nums[1])

        dp1 = [0] * n
        dp2 = [0] * n

        dp1[0] = nums[0]
        dp1[1] = max(nums[0], nums[1])
        for i in range(2, n - 1):
            dp1[i] = max(dp1[i - 1], dp1[i - 2] + nums[i])

        dp2[1] = nums[1]
        dp2[2] = max(nums[1], nums[2])
        for i in range(3, n):
            dp2[i] = max(dp2[i - 1], dp2[i - 2] + nums[i])

        return max(dp1[n - 2], dp2[n - 1])

   
    if len(nums) == 1:
        return nums[0]
    elif len(nums) == 2:
        return max(nums[0], nums[1])

    
    return max(rob_helper(nums[:-1]), rob_helper(nums[1:]))
