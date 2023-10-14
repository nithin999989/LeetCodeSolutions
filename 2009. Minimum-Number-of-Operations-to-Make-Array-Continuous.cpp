class Solution {
public:
    int minOperations(std::vector<int>& nums) {
        int n = nums.size();
        std::sort(nums.begin(), nums.end());
        std::vector<int> uniqueNums(nums.begin(), std::unique(nums.begin(), nums.end()));
        int ans = std::numeric_limits<int>::max();

        for (int i = 0; i < uniqueNums.size(); ++i) {
            int s = uniqueNums[i];
            int e = s + n - 1;
            auto it = std::upper_bound(uniqueNums.begin(), uniqueNums.end(), e);

            int idx = std::distance(uniqueNums.begin(), it);
            ans = std::min(ans, n - (idx - i));
        }
        return ans;
    }
};
