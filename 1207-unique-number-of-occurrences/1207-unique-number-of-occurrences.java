class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        int z=0;
         ArrayList<Integer> b = new ArrayList<Integer>();
  
        Set<Integer> mySet = new HashSet<>();
        for(int i:arr){
            mySet.add(i);
        }
        for(int i:mySet){
            int count=0;
            for(int k=0;k<arr.length;k++){
            if(i==arr[k]){
                count++;   
            }
            if(k==arr.length-1){
                b.add(count);
              }
            }
        }
        Set<Integer> mySet1 = new HashSet<>();
        for(int i:b){
            mySet1.add(i);
        }
        if(mySet1.size()==b.size()){
            return true;
        }
        return false; 
    }
}