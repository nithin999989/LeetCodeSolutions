class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int id, int vd) {
        if(id==0 and vd==0)
        return {0,0};
        for(int i=0;i< nums.size();i++)
        {
            for(int j=i+id;j<nums.size();j++)
            {
                if(abs(nums[i]-nums[j])>=vd)
                return {i,j};
            }
        }
        return {-1,-1};
    }
};