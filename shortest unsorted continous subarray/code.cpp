class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       
        int mx=nums[0],n=nums.size();
        int end=-1,start=-1;
        for(int i=1;i<nums.size();i++){
            if(mx>nums[i])
                start=i;
            else
                mx=max(mx,nums[i]);
        }
        
        if(start==-1)
            return 0;
       int  mn=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(mn<nums[i])
                end=i;
            else
                mn=min(mn,nums[i]);
        }
        return start-end+1;
    }
};
