class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        unordered_set<int>keys;
        vector<int>vis(n,0);
        keys.insert(0);
        int last=1;
        while(1)
        {
            for(auto k:keys)
            {
               
                if(vis[k]==0)
                for(auto kk:rooms[k])
                {
                    keys.insert(kk);
                }
                 vis[k]=1;
            }
            int currKeys=keys.size();
            if(currKeys==last) 
            {
                return currKeys==n;
            }
            else
            {
                last=currKeys;
            }
        }
        return false;
    }
};
