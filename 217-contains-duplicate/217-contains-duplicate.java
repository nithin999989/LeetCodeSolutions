class Solution {
    public boolean containsDuplicate(int[] nums) {
        //for(int i=0;i<nums.length;i++){
            HashSet<Integer> hs=new HashSet<Integer>();
            for(int i=0;i<nums.length;i++){
                if(!hs.contains(nums[i])){
                    hs.add(nums[i]);
                }else{
                    return true;
                }
            }
            return false;
        }
        
    
}