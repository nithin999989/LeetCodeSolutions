class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n = s1.length() + 2, m = s2.length() + 2;
        if (n + m - 4 != s3.length()) return false;
        vector<bool> dp(m);
        dp[1] = true;
        for (int i = 1; i < n; i++)
            for (int j = 1; j < m; j++) {
                bool up = dp[j] && (i < 2 || s1[i-2] == s3[j+i-3]),
                    left = dp[j-1] && (j < 2 || s2[j-2] == s3[j+i-3]);
               dp[j] = up || left;
            }
        return dp[m-1];
    }
};
