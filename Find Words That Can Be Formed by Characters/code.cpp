class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mpc;
        int ans=0;
        for(auto c:chars)mpc[c]++;
        for(auto w:words)
        {
          unordered_map<char,int>mp=mpc;
            int cheak=0;
          for(auto c:w)
          {
              mp[c]--;
              if(mp[c]<0)
              {
              cheak=1;
              break;
              }
          }
          if(cheak==0)
          {
              //cout<<w<<endl;
              ans+=w.size();
          }
        }
        return ans;
    }
};
