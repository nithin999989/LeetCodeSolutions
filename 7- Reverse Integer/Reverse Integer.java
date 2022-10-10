
/* Strategy: Reversing the integer is simple mathematical manipulation, take out the last digit and create the reversed integer. 
However keep a check for overflow while creating reverse integer.
*/

class Solution {
    public int reverse(int x) {
        int sign = x>0?1:-1;
        x = Math.abs(x);
        int rev=0;
        while(x>0){
            int dig = x % 10;
            if(rev > (Integer.MAX_VALUE-dig)/10){
                return 0;
            }
            rev = rev*10 + dig;
            x=x/10;
        }
        return  sign*rev;
    }
}