class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] left=new int[nums.length];
        int[] right=new int[nums.length];
        int[] op=new int[nums.length];
        int prod=1;
        for(int i=0;i<nums.length;i++){
            prod*=nums[i];
            left[i]=prod;
        }
        prod=1;
        for(int i=nums.length-1;i>0;i--){
            prod*=nums[i];
            right[i]=prod;
        }
        op[0]=right[1];
        op[nums.length-1]=left[nums.length-2];
        for(int i=1;i<nums.length-1;i++){
            op[i]=left[i-1]*right[i+1];
        }
        return op;
    }
}