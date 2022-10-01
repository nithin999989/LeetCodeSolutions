class Solution {
public:
    //greedy approach : O(n)
    int jump(vector<int>& nums)
    {
        int n = nums.size();
        int jumps = 0;
        int maxReach = 0;
        int currReach = 0;
        
        for(int i=0; i<n-1; i++){
            maxReach = max(maxReach, i+nums[i]);
            if(i==currReach){
                jumps++;
                currReach = maxReach;
            }
        }
        return jumps;
    }
};


// Recursion : brute-force : TLE
// int solve(vector<int>& nums, int idx){
//         if(idx == nums.size()-1) return 0;
//         int minJump = 1001;
//         for(int i=1; i<=nums[idx]; i++){
//             minJump = min(minJump, 1 + solve(nums,idx+i));
//         }
//         return minJump;
//     }
    
//     int jump(vector<int>& nums) {
//         return solve(nums,0);
//     }

//DP - Tabulation - o(n^2)
// int jump(vector<int>& nums) {
// 	int n = size(nums);
// 	vector<int> dp(n, 10001);
// 	dp[n - 1] = 0;  
// 	for(int i = n - 2; i >= 0; i--) 
// 		for(int jumpLen = 1; jumpLen <= nums[i]; jumpLen++) {
//              // min(n-1, i + jumpLen) for bounds handling
// 			dp[i] = min(dp[i], 1 + dp[min(n - 1, i + jumpLen)]); 
//         }
// 	return dp[0];
// }


//check this out
// https://leetcode.com/problems/jump-game-ii/discuss/1192401/Easy-Solutions-w-Explanation-or-Optimizations-from-Brute-Force-to-DP-to-Greedy-BFS