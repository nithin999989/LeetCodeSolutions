class Solution {
public:
    int ans=-1;
    int help(int sr,vector<vector<int>> &graph,vector<bool> &visited,unordered_map<int,int> &st,int time){
       
        
            if(visited[sr])
                return -1;
        visited[sr]=true;
        st[sr]=time;
        for(auto x:graph[sr]){
            if(!visited[x]){
             int t=help(x,graph,visited,st,time+1);
                if(t!=0)
                    return t;
            }
            else if(st.find(x)!=st.end())
            {
               return time-st[x]+1;
                
            }
        }
        st.erase(sr);
        
        return -1;
        
    }
    
    
    int longestCycle(vector<int>& edges) {
        int n=edges.size();
        vector<vector<int>> graph(n);
        for(int i=0;i<n;i++)
            if(edges[i]!=-1)
                graph[i].push_back(edges[i]);
        
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                unordered_map<int,int> st;
                ans=max(ans, help(i,graph,visited,st,0));
            }
        }
        
        return ans;
    }
};
