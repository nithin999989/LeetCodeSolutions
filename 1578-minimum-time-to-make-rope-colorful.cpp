class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {

        int size = colors.size();

        vector<int> dp(size,-1);

        return function(size-1,colors,neededTime,dp,'A', neededTime[size-1]);
    
        
    }

    int function(int i,string &s, vector<int> &t, vector<int> &dp, char prev , int forward){
        if(i<0) return 0;

        if(dp[i]!=-1) return dp[i];

        if(s[i] == prev) 
        return dp[i] = function(i-1, s,t,dp,s[i] , max(t[i] , forward)) + min(t[i],forward);
        else{
            return dp[i] = function(i-1,s,t,dp,s[i],t[i]);
        }
    }
};
