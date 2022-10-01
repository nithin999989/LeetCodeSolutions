class Solution {
public:
    //simple bfs variation
    void dfs(vector<vector<int>>& graph,vector<vector<int>>& ans, vector<int>& path, int curr)
    {
        path.push_back(curr);
        if(curr == graph.size()-1){
            ans.push_back(path);
        }
        else{
            for(auto it: graph[curr]){
                dfs(graph,ans,path,it);
            }
        }
        
        path.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        
        dfs(graph,ans,path,0);
        return ans;
    }
};