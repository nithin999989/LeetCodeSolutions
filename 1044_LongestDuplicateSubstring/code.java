import java.util.*;

class Solution {
    
    String ans; // to store the answer
    
    public String longestDupSubstring(String s) {
        
        ans = "";
        
        int n = s.length();
        int low = 1 , high = n;
        
        while(low <= high) {
            
            int mid = low + (high - low) / 2; // calc the mid
            
            if(haveDuplicateString(s,mid)) {
                
                low = mid + 1; // no need to search on left side
            }
            else {
                
                high = mid - 1; // no need to search on right side
            }
        }
        
        return ans;
    }
    
    private boolean haveDuplicateString(String s,int len) {
        
        // function returns true if we have duplicate string of length len
        Set<Long> set = new HashSet<>(); // stores the hash
        
        int n = s.length();
        
        long pr = 1; // stores the product
        long hash = 0;
        long q = 31; // prime number
        
        for(int i = n - 1 ; i >= n - len ; i--) {
            
            hash = ((hash * q) + (s.charAt(i) - 'a' + 1));
            
            if(i != n-len)
            pr = (pr * 31);
        }

        set.add(hash);
        
        for(int i = n - 1 ; i >= len  ; i--) {
            
            long exclude = ((s.charAt(i) - 'a' + 1) * pr);
            long include = (s.charAt(i - len) - 'a' + 1);
            
            hash = ((hash - exclude) * q  + include);
            
            if(set.contains(hash)) {
                
                // we have found the duplicate string
                ans = s.substring(i-len,i); // update the answer
                return true;
            }
            
            set.add(hash);
        }
        
        return false;
    }
}