class Solution {
public:
    //ques is a bit misleading, the top of the chair is actually at nth floor:([10 15 20] here)
    //Tabulation
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n = cost.size();
        
        int dp[n+1];
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        for(int i = 2; i < n;i++){
            dp[i] = cost[i] + (min(dp[i-1], dp[i-2]));
        }
        return min(dp[n-2], dp[n-1]);
    }
};

//Recursion -> O(2^N)
// int solve (vector<int>& cost, int n) {
//     if (n < 2) return cost[n];

//     return cost[n] + min(solve(cost, n - 1), solve(cost, n - 2));
// }
    
// int minCostClimbingStairs(vector<int>& cost) {
//     int n = cost.size();

//     return min(solve(cost, n - 1), solve(cost, n - 2));
// }