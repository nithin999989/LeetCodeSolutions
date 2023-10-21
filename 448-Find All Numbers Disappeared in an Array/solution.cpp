class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> res; 
        vector<int> temp(n + 1, 0);
        
        for(int i = 0; i < n; i++)
        {
            temp[nums[i]] = nums[i];
        }
        
        for(int i = 1; i < temp.size(); i++)
        {
            // cout << temp[i] << " ";
            if(temp[i] == 0)
            {
                res.push_back(i);
            }
        }
        
        return res;
    }
};