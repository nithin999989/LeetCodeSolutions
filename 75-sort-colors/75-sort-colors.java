class Solution {
    public void sortColors(int[] a) {
        int low=0,mid=0,high=a.length-1;
        while(mid<=high){
            if(a[mid]==0){
                int temp=a[mid];
                    a[mid]=a[low];
                    a[low]=temp;
                low++;mid++;
            }
            else if(a[mid]==1){
                mid++;
            }
            else{
                int temp1=a[mid];
                    a[mid]=a[high];
                    a[high]=temp1;
                high--;
            }
        }
        
        
    }
   
}