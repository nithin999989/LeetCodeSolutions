class Solution {

public double helper(double x, int n){
    
    if(n == 0){
        return 1;
    }
    double in = 1;
    
    if(n%2 != 0){
        in = x;
    }
    
    double ans = helper(x, n/2);
    
    return ans * ans * in;
}
public double myPow(double x, int n) {
    
    
    double ans = helper(x,Math.abs(n));
    
    if( n < 0){
        ans = 1/ans;
    }
    
    return ans;
    
}
}
