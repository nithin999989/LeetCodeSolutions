class Solution {
    public int findMin(int[] nums) {
        int min=nums[0];
        int temp;
        for(int i=1;i<nums.length;i++){
            temp=nums[i];
            if(temp<min){
                min=temp;
            }
        }return min;
    }
}