//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));

        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String roman = br.readLine().trim();
            Solution ob = new Solution();
            System.out.println(ob.romanToDecimal(roman));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    // Finds decimal value of a given roman numeral
    public int romanToDecimal(String str) {
        // code here
        int ans=0;
        int num=0;
        for(int i=str.length()-1;i>=0;i--)
        {
            char ch=str.charAt(i);
            switch(ch)
            {
                case 'I': num=1;
                break;
                case 'V' :num=5;
                break;
                case 'X' :num=10;
                break;
                case 'L' :num=50;
                break;
                case 'C' :num=100;
                break;
                case 'D' :num=500;
                break;
                case 'M' :num=1000;
                break;
            }
            if(num*4<ans)
                ans-=num;
            else 
                ans+=num;
        }
        return ans;
    }
}