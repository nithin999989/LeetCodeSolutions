class Solution {
public:
    
    
    bool solve(int i,set<string>&st , string &target,int m, vector<int>&dp) {
   
     if(i==m) return true ;
     if(dp[i] != -1) return dp[i] ;     
     string temp  = "" ;
    
     for(int j = i ;j<m ;j++) {
         temp += target[j] ;
         if(st.count(temp))
              if (solve(j+1 ,st,target,m,dp)) return dp[i] = 1 ;
    }
    return dp[i] = 0 ;
     
}
    
    
    bool wordBreak(string s, vector<string>& wordDict) {
        
        set<string>st ;
        for(auto x : wordDict) st.insert(x) ;
        int m = s.size() ;
        vector<int>dp(m+1,-1) ;
        return solve(0,st,s,m,dp) ;
        
    }
};
