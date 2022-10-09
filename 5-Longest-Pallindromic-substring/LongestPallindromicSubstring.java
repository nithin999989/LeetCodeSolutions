class Solution {
    public String longestPalindrome(String s) {
        boolean a[][]= new boolean [s.length()+1][s.length()+1];
        int n=s.length();
       
        for(int len=1;len<=2;len++){
            for(int i=0;i<n-len+1;i++){
                int j=i+len-1;
                if(len==1){
                    a[i][j]=true;
                }
                else {
                    a[i][j]=s.charAt(i)==s.charAt(j);
                }
            }
        }
        for(int len=3;len<=n;len++){
            for(int i=0;i<n-len+1;i++){
                int j=i+len-1;
                if(s.charAt(i)==s.charAt(j)){
                    a[i][j]=a[i+1][j-1];
                }
                else a[i][j]=false;
            }
        }
        int indx=-1;
        int length=0;
    
         for(int len=1;len<=n;len++){
            for(int i=0;i<n-len+1;i++){
                int j=i+len-1;
                if(a[i][j]){
                   indx=i;
                    length=len;
                }
               
            }
        }
        return s.substring(indx,indx+length);
       
        
        
    }
}