class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n = 10001;
    
	    //take the freq sum by each number
        vector<int> freq(n, 0);
        vector<int> dp(n, 0);
    
        for(auto i: nums){
            freq[i]++;
        }
    
        dp[0] = 0;
        dp[1] = freq[1];
        //now apply the house robbing concept on freq array which is sorted(by index)
        //u cant earn points from adjacent so i-2, go to i-1
        for(int i=2; i<n; i++){
            dp[i] = max(dp[i-2] + i*freq[i], dp[i-1]);
        }
    
        return dp[n-1];
    }
};

//variation of HOUSE ROBBER PROBLEM(dp on 1D)