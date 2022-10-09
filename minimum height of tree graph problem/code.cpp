 vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
         vector<int> ans;
        if(n==1){
          ans.push_back(0);
            return ans;
        }  
        
        
        
        vector<int> degree(n,0);
        vector<vector<int>> graph(n);
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
           graph[edges[i][1]].push_back(edges[i][0]);
            degree[edges[i][0]]++;
            degree[edges[i][1]]++;
    }
queue<int> mp;
        for(int i=0;i<n;i++)
            if(degree[i]==1)
                mp.push(i);
        
        
        while(n>2)
        {
            int s=mp.size();
            n-=s;
            while(s-->0){
                int t=mp.front();
                mp.pop();
                for(auto x:graph[t])
                {
                    degree[x]--;
                    if(degree[x]==1)
                        mp.push(x);
                }
            }
        }
        
       
      while(mp.empty()==false){
       int x=mp.front();
          mp.pop();
          
          ans.push_back(x);
      }
        return ans;
      
    }
