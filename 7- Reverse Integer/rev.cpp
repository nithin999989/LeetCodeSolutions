
/* intituion is simple so  Reversing the integer is simple mathematical manipulation, take out the last digit and create the reversed integer. 
However keep a check for overflow while creating reverse integer.
*/

class Solution {
public:
    int ans=0;
    int reverse(int x) {
        while(x!=0)
        { int d=x%10;
        
         if(ans>INT_MAX/10 || ans<INT_MIN/10)
             return 0;
         ans=ans*10+d;
        x=x/10;}
    return ans;}
    
};