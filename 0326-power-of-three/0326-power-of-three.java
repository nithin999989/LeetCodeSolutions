class Solution {
    public boolean isPowerOfThree(int n) {
         double p = Math.log10(n)/ Math.log10(3);
        // checking to see if power is an integer or not
        if (p - (int)p == 0) {
            return true;
        }
        else
           return false;
        
    }
}