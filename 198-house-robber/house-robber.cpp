//Without Using Extra Space
// T.C-O(n)
// S.c-O(1)
class Solution {
public:
       int solve(vector<int>nums){
       int next1=0;
       int next2=0;
        int curr=0;
        int n=nums.size();
        for(int index=n-1;index>=0;index--){
            int incl=nums[index]+next2;
            int excl=0+next1;
            curr=max(incl,excl);
            next2=next1;
            next1=curr;
        }
        return curr;
    }
    int rob(vector<int>& nums) {
         
        return solve(nums );
    }
};
