class Solution {
private:
    int func(int i, int j1, int j2, vector<vector<int>>& grid, int n, int m,vector<vector<vector<int>>>&dp){

        if(j1 < 0 or j1 >= m or j2 < 0 or j2 >= m) return -1e9;
        if(i == n-1){
            if(j1 == j2) return grid[i][j1];
            else return grid[i][j1] + grid[i][j2];
        }
        if(dp[i][j1][j2] != -1) return dp[i][j1][j2];
        int value = -1e9;

        for(int dj1 = -1; dj1<= +1; dj1++){
            for(int dj2 = -1; dj2 <= +1; dj2++){
                if(j1 == j2){
                    value =  max(value, grid[i][j1] +  func(i+1, j1+dj1, j2+dj2, grid, n, m, dp));
                }
                else{
                    value =  max(value, grid[i][j1] + grid[i][j2] +  func(i+1, j1+dj1, j2+dj2, grid, n, m, dp));
                }
               

            }
        }
        return dp[i][j1][j2] = value;
    }
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<vector<int>>>dp(n, vector<vector<int>>(m, vector<int>(m, 0)));

        // return func(0, 0, m-1, grid, n, m, dp);

       
        for(int j1=0; j1<m; j1++){
            for(int j2=0; j2<m; j2++){
                if(j1 == j2){
                    dp[n-1][j1][j2] =  grid[n-1][j1];
                }
                else{
                    dp[n-1][j1][j2] = grid[n-1][j1] + grid[n-1][j2];
                }
            }
        }

        for(int i=n-2; i>=0; i--){
            
            for(int j1=0; j1<m; j1++){
                for(int j2=0; j2<m; j2++){
                    int value = -1e9;
                    for(int dj1 = -1; dj1<= +1; dj1++){
                        for(int dj2 = -1; dj2 <= +1; dj2++){
                            if(j1 == j2){
                                if(j1+dj1 >=0 and j2+dj2>=0 and j1+dj1<m and j2+dj2<m )value =  max(value, grid[i][j1] +  dp[i+1][j1+dj1][j2+dj2]);
                            }
                            else{
                               if(j1+dj1 >=0 and j2+dj2>=0 and j1+dj1<m and j2+dj2<m)value =  max(value, grid[i][j1] + grid[i][j2] +  dp[i+1][j1+dj1][j2+dj2]);
                            }
                        

                        }
                    }
                    dp[i][j1][j2] = value;
                }
            }
            
            
        }

        return dp[n-1][m-1][m-1];
        
    }
};