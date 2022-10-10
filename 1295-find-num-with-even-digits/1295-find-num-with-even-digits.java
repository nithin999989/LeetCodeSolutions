class Solution {
    public  int findNumbers(int[] nums) {
        int c = 0;
        for(int i : nums){
            if(digitCount(i) % 2 == 0) c++;
        }
        return c;
    }
    public static int digitCount(int n){
        if(n == 0) return 0;
        if(n < 0 ) n *= -1;
        return (int)(Math.log10(n)) + 1;
    }
}