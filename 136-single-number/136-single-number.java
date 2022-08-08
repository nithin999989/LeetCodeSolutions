class Solution {
    public int singleNumber(int[] arr) {
        Arrays.sort(arr);
        int i=0;
        
        for( i=0;i<arr.length-1;i+=2){
            if(arr[i]!=arr[i+1]){
                return arr[i];
            }
            
       
    }return arr[arr.length-1];
}
}
