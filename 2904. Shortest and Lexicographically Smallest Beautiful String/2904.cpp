class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int sz=s.size();
        string ans="";
        for(int i=0;i<n;i++)
        { int c=0;
            if(s[i]=='1')
            { cout<<"h"<<i;
              c=1;
              int j=i+1;
              for(;j<n;j++)
              {   if(c==k)
                  break;
                  if(s[j]=='1')
                  c++;
                  
              }
              if(c==k)
              {string st=s.substr(i,j-i);
              if(st.size()<sz)
              {  sz=st.size();
                  ans=st;
              }
              else if(st.size()==sz)
              {   if(ans!="")
                  ans=st<ans?st:ans;
                  else ans=st;
              }

            }
        }}
        return ans;
    }
};