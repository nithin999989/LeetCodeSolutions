
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
//         BITMASKING APPROACH  
        vector<vector<int>> res;
        int n = nums.size();
        int total = (1 << n); // size of vector<vector<int>> res;
//         0<=mask<=(1<<n)-1
        for (int mask = 0; mask < total; ++mask)
        {
            vector<int> subset;
//             mask = 6 , n=3 , mask = 110
            for (int i = 0; i < n; ++i)
            {
                if (mask & (1 << i)) {
                    subset.push_back(nums[i]);
                }
            }

            res.push_back(subset);
        }
        return res;
    }
};
// TC - O(n*2^n)