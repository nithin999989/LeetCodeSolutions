class Solution {
    public boolean halvesAreAlike(String str) {
        char[] s=str.toCharArray();
        int k=s.length-1,count=0,count9=0;
        k=k/2;
        for(int i=0;i<=k;i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                count++;
            }
        }
        for(int i=k+1;i<s.length;i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' ||s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
                count9++;
            }
        }
        if(count==count9){
            return true;
        }return false;
    }
}