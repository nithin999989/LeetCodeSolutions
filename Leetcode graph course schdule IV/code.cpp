vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& pre, vector<vector<int>>& queries) {
        
        if(pre.size()==0){
       int s=queries.size();
        vector<bool> ans(s,false);
            return ans;
        }
        
        vector<vector<int>> graph(n);
        vector<int> indgree(n,0);
        for(int i=0;i<pre.size();i++){
             graph[pre[i][0]].push_back(pre[i][1]);
            indgree[pre[i][1]]++;
        }
        
        queue<int> mp;
        for(int i=0;i<n;i++)
            if(indgree[i]==0)
                mp.push(i);
        
     vector<unordered_set<int>> ans(n);
        int index=0;
        while(mp.size()>0){
            int t=mp.front();
            mp.pop();
            
            for(auto x:graph[t]){
                ans[x].insert(t);
                indgree[x]--;
                for(auto y:ans[t]){
                    ans[x].insert(y);
                }
                if(indgree[x]==0)
                    mp.push(x);
            }
        }
        
        vector<bool> final;
        for(int i=0;i<queries.size();i++){
         int secondq=queries[i][1];
            int firstq=queries[i][0];
            if(ans[secondq].find(firstq)!=ans[secondq].end())
                final.push_back(true);
            
        else
            final.push_back(false);
            
        }
        
        return final;
    }
