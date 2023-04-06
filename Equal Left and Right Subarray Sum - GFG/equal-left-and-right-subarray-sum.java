//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
import java.lang.*;

class GFG {
    public static void main(String args[]) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int test = Integer.parseInt(br.readLine());
		while(test-- > 0) {
			int N = Integer.parseInt(br.readLine());
			int [] A = new int[N];
			String [] str = br.readLine().trim().split(" ");
			for(int i = 0; i < N; i++)
				A[i] = Integer.parseInt(str[i]);
			Solution ob = new Solution();
			System.out.println(ob.equalSum(A, N));
		}
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
	int equalSum(int [] A, int N) {
	    int a[]=new int[N];
	    int b[]=new int[N];
	    int s=0;
	    if(A.length==1){
	        return 1;
	    }
	    for(int i=0;i<N;i++){
	        s=s+A[i];
	        a[i]=s;
	        
	    }
	    s=0;
	    for(int i=N-1;i>=0;i--){
	        s=s+A[i];
	        b[i]=s;
	        
	    }
	    for(int i=0;i<N;i++){
	        if(a[i]==b[i]){
	            return i+1;
	        }
	    }
	    return -1;
	    
	    
	    
	    
	    
	    
	    
		}
}