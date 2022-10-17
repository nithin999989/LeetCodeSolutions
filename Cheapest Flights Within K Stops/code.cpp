class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>g(n);
        for(auto f:flights)
        {
            int u=f[0],v=f[1],w=f[2];
            g[u].push_back({v,w});
        }
        queue<pair<int,int>>q;
         vector<int>cost(n,INT_MAX);
        q.push({src,0});
        cost[src]=0;
        while(!q.empty() and k>=0)
        {
            int sz=q.size();
            k--;
            
            for(int i=0;i<sz;i++)
            {
                int u=q.front().first,preCost=q.front().second;
                q.pop();
                for(auto child:g[u])
                {
                    int v=child.first,currCost=child.second;
                    if(cost[v]>preCost+currCost)
                    {
                        cost[v]=preCost+currCost;
                        q.push({v,cost[v]});
                    }
                }
            }
            
        }
        
        return cost[dst]==INT_MAX?-1:cost[dst];
    }
};
