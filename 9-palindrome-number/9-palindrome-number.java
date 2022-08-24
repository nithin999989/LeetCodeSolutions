class Solution {
    public boolean isPalindrome(int x) {
        int rev=0;
        int r=x;
        if(x<0){
            return false;
        }
        int u;
        while(x>0){
            u=x%10;
            rev=rev*10+u;
            x=x/10;
        }
        if(rev==r){
            return true;
        }
        
        
    return false;  
    }
    
}