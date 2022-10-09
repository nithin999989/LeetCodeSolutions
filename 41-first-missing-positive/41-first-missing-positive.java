class Solution {
    public int firstMissingPositive(int[] nums) {
        cyclicSort(nums); 
        for(int i=0;i<nums.length;i++){
            if(nums[i] != i+1){
                return i+1;
            }
        }
        return nums.length+1;
    }
    
    public void cyclicSort(int[] nums){
        int i = 0;
        while(i < nums.length){
            if(nums[i] > 0 && nums[i] < nums.length){ 
                int ind = nums[i] - 1;
                if(nums[i] != nums[ind]){
                    int temp = nums[i];
                    nums[i] = nums[ind];
                    nums[ind] = temp;
                }
                else i++;
            }
            else i++;
        }
        
    }
}