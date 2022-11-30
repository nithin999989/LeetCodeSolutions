class Solution {
    public static int sum(int k){
        int sum2=0;
        while(k>0){
        int rem=k%10;
        sum2+=rem;
        k/=10;}return sum2;
        
    }
    public int addDigits(int n) {
        int sum1=n;
        if(sum1<10){
            return sum1;
        }
        while(sum1>9){
            sum1=sum(sum1);
        }return sum1;
    }
}