class Solution {
    public int maximumWealth(int[][] accounts) {
        int max = 0;
        for(int[] cust : accounts){
            int wealth = 0;
            for(int amt : cust){
                wealth += amt;
            }
            if(wealth > max) max = wealth;
        }
        return max;
    }
}