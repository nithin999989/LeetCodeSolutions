class Solution {
    public boolean containsDuplicate(int[] arr) {
         int n = arr.length;
        
        //IF ONLY ONE ELEMENT RETURN FALSE
        if(n == 1){return false;}
        
        //FOR STORING THE ELEMENTS
        HashSet<Integer> set = new HashSet<>();
        
        //O OT N IF ANY ELEMENT ALLREADY PRESENT
        //RETURN TRUE
        for(int i =0; i<n; i++)
        {
            if(set.contains(arr[i])){return true;}
            set.add(arr[i]);
        }
        
        //IF NO DUPLICATES PRESENT RETURN FALSE
        return false;
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
    
}