class Solution {
public:
int maxFrequency(vector<int> &nums, int k) {
        sort(begin(nums), end(nums));
        int n = nums.size();
        long long ans = 0, sum = 0, l = 0, r = 0;
        for (; r < n; r++) {
            sum += nums[r];
            while ((r - l + 1) * nums[r] - sum > k)
                sum -= nums[l++];
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};