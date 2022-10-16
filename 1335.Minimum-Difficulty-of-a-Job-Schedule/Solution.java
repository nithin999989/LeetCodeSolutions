class Solution {
    public int maxValue(int[] job,int start,int end){
        int max = 0;
        for(int k=start;k<=end;k++){
            max = Math.max(max,job[k]);
        }
        return max;
    }
    public int Solver(int[] job,int d,int start,Integer[][] dp){
        if(start==job.length){
            return Integer.MAX_VALUE;
        }
        if(d==1){
            return maxValue(job,start,job.length-1);
        }
        if(dp[start][d]!=null){
            return dp[start][d];
        }
        int ans = Integer.MAX_VALUE;
        for(int i=start;i<job.length;i++){
            int temp = Solver(job,d-1,i+1,dp);
            if(temp!=Integer.MAX_VALUE){
                ans = Math.min(ans,temp+maxValue(job,start,i));
            }
        }
        dp[start][d]=ans;
        return ans;
    }
    public int minDifficulty(int[] job, int d) {
        Integer[][] dp = new Integer[job.length][d+1];
        int ans = Solver(job,d,0,dp);
        if(ans==Integer.MAX_VALUE){
            return -1;
        } 
        return ans;
        }
    }
