class Solution {
public:
    // main logic or trick for this problem : bahar se andar ki taraf jao
    
    bool isValid(vector<vector<int>>& heights, vector<vector<bool>>& vis, int i, int j){
        int n = heights.size(), m = heights[0].size();
        if(i >= 0 && i < n && j >=0 && j <m && !vis[i][j]) return true;
        return false;
    }
    
    void dfs(vector<vector<int>>& heights, vector<vector<bool>>& vis, int i, int j){
        vis[i][j] = true;
        
        if(isValid(heights,vis,i-1,j) && heights[i-1][j] >= heights[i][j]){ 
            dfs(heights,vis,i-1,j);
        }
        if(isValid(heights,vis,i+1,j) && heights[i+1][j] >= heights[i][j]) {
            dfs(heights,vis,i+1,j);
        }
        if(isValid(heights,vis,i,j-1) && heights[i][j-1] >= heights[i][j]) {
            dfs(heights,vis,i,j-1);
        }
        if(isValid(heights,vis,i,j+1) && heights[i][j+1] >= heights[i][j]) {
            dfs(heights,vis,i,j+1);
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
    {
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<bool>> pacific(n,vector<bool>(m));
        vector<vector<bool>> atlantic(n,vector<bool>(m));
        vector<vector<int>> ans;
        
        for(int i=0; i<m; i++){
            dfs(heights, pacific, 0, i);
            dfs(heights, atlantic, n-1, i);
        }
        for(int j=0; j<n; j++){
            dfs(heights, pacific, j, 0);
            dfs(heights, atlantic, j, m-1);
        }
        
        //getting the results
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                // agar uss particular point se dono oceans mai jaa paa rahe hai
                // toh answer push kardo
                if(pacific[i][j] && atlantic[i][j]) ans.push_back({i,j});
            }
        }
        return ans;
    }
};

//  DFS Approach :
// Time Complexity : O(M*N), When worst case occur then all cells are reachable to both oceans and also visited twice. And this will happened only when all elements are become equal.

// Space Complexity : O(M*N), to mark the atlantic and pacific visited cells.

