class Solution {
    public int removeElement(int[] nums, int val) {
        int a[]=new int[nums.length];
       int  j=0;
        int count=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=val){
                a[j]=nums[i];
                count++;
                j++;
                
            }
            
            
        }
        for(int i=0;i<nums.length;i++){
            nums[i]=a[i];
        
    }return count;
}
}