class Solution {
    public int addDigits(int n) {
    if(n == 0) return 0;
       while(true){
           if(n % 10 == n){
               return n;
           }
           n = findDigitSum(n);
       }
    }
    public static int findDigitSum(int n){
        int s = 0;
        while(n > 0){
            s += (n % 10);
            n /= 10;
        }
        return s;
    }
}