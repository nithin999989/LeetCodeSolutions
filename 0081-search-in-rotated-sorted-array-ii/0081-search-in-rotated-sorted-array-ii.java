class Solution {
    public boolean search(int[] nums, int target) {
    int left = 0;
    int right = nums.length - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return true; // Found the target
        }

        // Handle the case with duplicates
        while (left < mid && nums[left] == nums[mid]) {
            left++;
        }

        if (nums[left] <= nums[mid]) {
            // The left half is sorted
            if (nums[left] <= target && target < nums[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            // The right half is sorted
            if (nums[mid] < target && target <= nums[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return false; // Target not found
}

}