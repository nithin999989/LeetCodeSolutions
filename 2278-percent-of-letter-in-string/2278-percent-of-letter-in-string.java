class Solution {
    public int percentageLetter(String s, char letter) {
        if(s.length() == 1 && s.charAt(0) == letter) return 100;
        int c = 0;
        for(int i=0;i<s.length();i++){
            if(s.charAt(i) == letter) c++;
        }
        if(c == 0) return 0;
        if(s.length() == 100) return c;
        return (int)((float)c/s.length() * 100);
    }
}