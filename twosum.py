def two_sum(nums, target):
    num_indices = {}  
    
    for i, num in enumerate(nums):
        complement = target - num  
        if complement in num_indices:
            return [num_indices[complement], i]  
        num_indices[num] = i
    return []

nums1 = [4,8,9,12,11]
target1 = 20
print(two_sum(nums1, target1)) 

nums2 = [7,6,8,12,45]
target2 = 19
print(two_sum(nums2, target2)) 