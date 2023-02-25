class Solution {
    public boolean isPowerOfThree(int n) {
         double a = Math.log10(n)/ Math.log10(3);
      
        return a%1==0;
    
       
        
    }
}