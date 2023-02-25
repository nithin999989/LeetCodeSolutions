public class Solution {
    public boolean isPowerOfTwo(int n) {
        return Integer.toString(n, 2).matches("^10*$");
    }
}