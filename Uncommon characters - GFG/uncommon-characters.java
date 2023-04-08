//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main(String args[])throws IOException
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    String A = sc.next();
                    String B = sc.next();
                    Solution ob = new Solution();
                    System.out.println(ob.UncommonChars(A, B));
                }
        }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    String UncommonChars(String A, String B)
    {
        StringBuilder sb=new StringBuilder();
        int arr1[]=new int[256];
           int arr2[]=new int[256];
        Arrays.fill(arr1,-1);
          Arrays.fill(arr2,-1);
        for(int i=0;i<A.length();i++){
            arr1[A.charAt(i)]=0;
        }for(int i=0;i<B.length();i++){
            arr2[B.charAt(i)]=0;
        }
        for(int i=0;i<256;i++){
            if(arr1[i]==0&&arr2[i]!=0   ||arr1[i]!=0&&arr2[i]==0  ){
                char c=(char)i;
                sb.append(c);
            }
        }
        if(sb.length()==0){
            String ss=new String("-1");
            return ss;
        }
        return sb.toString();
    }
}