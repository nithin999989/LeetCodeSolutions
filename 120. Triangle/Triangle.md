class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        // corner case
        if(triangle == null || triangle.size() == 0) return 0;
        
        // M[i] represents the min total from bottom to current position
        int m = triangle.size();
        int n = triangle.get(m - 1).size(); // last row size
        int[] M = new int[n];
        M[0] = triangle.get(0).get(0);
        
        // induction rule
        // M[j] = min(M[j - 1], M[j]) + curVal
        for(int i = 1; i < m; i++){
            List<Integer> cur = triangle.get(i);
            for(int j = cur.size() - 1; j >= 0; j--){
                if(j == 0){
                    M[0] = M[0] + cur.get(j);
                }else if(j == cur.size() - 1){
                    M[j] = M[j - 1] + cur.get(j);
                }else{
                    M[j] = Math.min(M[j - 1], M[j]) + cur.get(j);
                }
            }
        }
        
        int min = Integer.MAX_VALUE;
        for(int i = 0; i < n; i++){ 
            min = Math.min(min, M[i]);
        }
                
        return min;
    }
}
