class Solution {
    private int MODULO = (int)Math.pow(10, 9) + 7;
    private Integer[][] dp = new Integer[31][1001];
    public int numRollsToTarget(int n, int k, int target) {
        if(target < n) {
            return 0;
        } if(dp[n][target] != null) {
            return dp[n][target];
        } if(n == 0) {
            if(target == 0) {
                return 1;
            }
            return 0;
        }
        
        int ways = 0;
        for(int face = 1; face <=k; face++) {
            ways += numRollsToTarget(n-1, k, target-face);
            ways = ways%MODULO;
        }
        
        dp[n][target] = (int)ways;
        return dp[n][target];    
    }
}
