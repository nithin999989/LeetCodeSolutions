class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& p, vector<int>& t) {
        int ans=0,j=0;
        sort(p.begin(),p.end());
        sort(t.begin(),t.end());
        for(int i=0;i<p.size();i++)
        {
            while(j<t.size() && t[j]<p[i])
            {
                j++;
            }
            if(j<t.size())
            {
                j++;
                ans++;
            }
            if(j>=t.size())
                break;
        }
        return ans;
    }
};
