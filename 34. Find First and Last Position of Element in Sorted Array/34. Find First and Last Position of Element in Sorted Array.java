class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        if(nums.size()==0)
        {
            v.push_back(-1);
            v.push_back(-1);
            return v;
            
        }
        auto it=find(nums.begin(),nums.end(),target);
        if(it==nums.end())
        {
              v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                
            {
                v.push_back(i);
                break;
                
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                v.push_back(i);
                break;
                
            }
        }
        return v;
        
    }
};
