// intituion simple we will reverse our given number and at the end of the progra, we will compare our reverse number with
// original number if both are equal then we will return true otherwise false so here is the code with

// Time complexity of  O(n) and Space compleixty of  O(1)
 bool isPalindrome(int x) {
        int temp=x;
        int rev=0;
        while(x!=0)
        {
            int r=x%10;
            if(rev > INT_MAX/10 || rev< INT_MIN/10)
                return false;
            rev=rev*10+r;
            x=x/10;
        }
        if(rev<0)
        {  return false;}
        if(rev==temp)
             return true;
        else 
            return false;

