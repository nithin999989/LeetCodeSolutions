class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int>> dp;
        dp = triangle;
        for(int i = triangle.size()-2;i>=0;i--)
        {
            for(int j = 0;j<triangle[i].size();j++)
            {
                dp[i][j] += min(dp[i+1][j],dp[i+1][j+1]);
            }
        }
        return *min_element(dp[0].begin(),dp[0].end());
    }
};
