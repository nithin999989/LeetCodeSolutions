 bool isMatch(string s, string p) {
        
        int l1=p.length(),l2=s.length();
        vector<vector<bool>> dp(l1+1,vector<bool>(l2+1,false));
        
        for(int i=0;i<=l1;i++){
            for(int j=0;j<=l2;j++){
                
                if(i==0 && j==0)
                    dp[i][j]=true;
                else if(i==0)
                    dp[i][j]=false;
                else if(j==0){
                    if(p[i-1]=='*')
                        dp[i][j]=dp[i-1][j];
                    else
                        dp[i][j]=false;
                }
                
                else if(p[i-1]==s[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else if (p[i-1]!=s[j-1]){
                    if(p[i-1]=='?')
                        dp[i][j]=dp[i-1][j-1];
                    else if(p[i-1]=='*')
                        dp[i][j]=dp[i-1][j] || dp[i][j-1];
                
                
                }
                
                
            }
        }
        
        return dp[l1][l2];
        
    }
