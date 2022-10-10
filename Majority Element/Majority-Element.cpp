class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int limit = (nums.size())/2;
        int count=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                count++;
                if(count > limit){
                    return nums[i];
                }
            }
            else{
                count=1;
            }
        }
        return nums[0];
    }
};