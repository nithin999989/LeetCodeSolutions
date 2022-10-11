class Solution {
    public boolean increasingTriplet(int[] nums) {
        int first = Integer.MAX_VALUE, second = Integer.MAX_VALUE;
        
        for (int n: nums) {
            if (n < first) {
                first = n;
            } else if (n < second && n != first) {
                second = n;
            }
            
            if(n > first && n > second) {
                return true;
            }
        }
        
        return false;
    }
}
