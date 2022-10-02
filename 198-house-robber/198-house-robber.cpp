class Solution {
public:
    //DP on 1D array
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        if(n==0) return 0;
        if(n==1) return nums[0];
        
        dp[0]=nums[0];
        dp[1]=max(nums[0],nums[1]);  
        
        for(int i=2;i<n;i++)
        {
            dp[i]=max( dp[i-2]+nums[i] , dp[i-1] );
        }
        return dp[n-1];
        
    }
};


//memoization
// int maxsum(int i,vector<int>& nums,vector<int>&dp){
// 		if(i<0)return 0;
// 		if(dp[i]!=-1)return dp[i];
// 		int pick=nums[i]+maxsum(i-2,nums,dp);
// 		int notpick=maxsum(i-1,nums,dp);
// 		return dp[i]=max(pick,notpick);
// 	}

// 	int rob(vector<int>& nums) {
// 		vector<int>dp(nums.size(),-1);
// 		return maxsum(nums.size()-1,nums,dp); 
// 	}