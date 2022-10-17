class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& ee) {
        vector<int>in(n,0);
        unordered_map<string,int>mp;
        for(auto e:ee)
        {
            in[e[0]]++;
            in[e[1]]++;
            string x=to_string(e[0])+"-"+to_string(e[1]);
             
            mp[x]=1;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int curr=in[i]+in[j];
                string x="",y="";
                x = to_string(i)+"-"+to_string(j);
                 y=to_string(j)+"-"+to_string(i);
                if(mp[x] || mp[y])curr-=1;
                ans=max(ans,curr);
            }
        }
        return ans;
    }
};
