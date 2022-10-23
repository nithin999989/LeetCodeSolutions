class Solution {
	public int findMin(int[] nums) {
   
	int start = 0;
    int end = nums.length -1;
    
        while (start <= end) {
            int mid = start + (end - start)/2;
			
            if (mid < end && nums[mid] > nums[mid + 1])
                return nums[mid + 1];     // greater index holds the min element in the array
            if (start < mid && nums[mid - 1] > nums[mid] )
                return nums[mid];     //  greater index holds the min element in the array
				
			if (nums[start] > nums[mid])    // search in the left half 
                end = mid - 1;
            else    // search in the right half
                start = mid + 1;
        } 
    return nums[0];
	}
}