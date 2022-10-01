class Solution {
public:
   
    
    int uniquePaths(int m, int n) 
    {
        vector<vector<int>> dp(m,vector<int>(n)); //dp initialization
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                
                if(i == 0 || j == 0) 
                    dp[i][j] = 1;
                else
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                
            }
        }
        return dp[m-1][n-1];
    }
};

 //  memoization 
//  int solve(vector<vector<int>> &dp, int i, int j)
//     {
//         if(i == 0 && j == 0) return 1;
//         if(i < 0 || j < 0) return 0;
        
        
//         if(dp[i][j] != -1) return dp[i][j];
        
//         int left = solve(dp, i , j-1) ;
//         int up = solve(dp, i-1 , j);
        
//         return dp[i][j] = left + up ;
//     }