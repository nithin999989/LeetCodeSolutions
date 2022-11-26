class Solution {
    public int maxProduct(int[] nums) {
        int max1=nums[0];
        for(int i=0;i<nums.length;i++){
            int prod=1;
            for(int j=i;j<nums.length;j++){
                prod*=nums[j];
                max1=Math.max(prod,max1);
            }
        }return max1;
    }
}