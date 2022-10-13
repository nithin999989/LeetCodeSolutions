 map<int,int> dp;
    
    
    long long int help(long long int n){
        // cout<<n<<endl;
        if(n==1)
            return 0;
        else if(dp.find(n)!=dp.end())
            return dp[n];
      if(n%2==0)
          return dp[n]=1+help(n/2);
        return dp[n]=1+min(help(n+1),help(n-1));
        
    }
    
    int integerReplacement(int n) {
        
        
        return help(n);
        
        
        
    }
