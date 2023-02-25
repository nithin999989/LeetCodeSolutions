public class Solution {
    public boolean isPowerOfFour(int n) {
        return Integer.toString(n, 4).matches("^10*$");
    }
}