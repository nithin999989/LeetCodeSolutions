class Solution {
public:
int longestNiceSubarray(vector<int> &nums) {
        int n = nums.size();
        vector<int> h(32);
        int tmp = 0, ans = 0;
        int l = 0;
        auto add = [&](int x) {
            for (int i = 0; i < 32; i++) {
                if ((1 << i) & x)
                    h[i] += 1;
            }
        };
        auto pred = [&]() -> bool {
            for (int i = 0; i < 32; i++) {
                if (h[i] > 1)
                    return false;
            }
            return true;
        };

        auto rem = [&](int x) {
            for (int i = 0; i < 32; i++) {
                if ((1 << i) & x)
                    h[i] -= 1;
            }
        };

        for (int r = 0; r < n; r++) {
            add(nums[r]);
            while (!pred()) {
                rem(nums[l++]);
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};