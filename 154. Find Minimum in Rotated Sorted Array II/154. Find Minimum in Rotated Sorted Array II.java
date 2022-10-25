class Solution {
    public int findMin(int[] arr) {
       
        int i=0,j=arr.length-1;
        if(arr[i]<arr[j])
            return arr[i];
        while(i<j)
        {
            int mid=i+(j-i)/2;
            if(arr[mid]>arr[j])
                i=mid+1;
            else  if(arr[mid]<arr[j])
                j=mid;
            else 
                j--;
        }
        return arr[j];
    }
}