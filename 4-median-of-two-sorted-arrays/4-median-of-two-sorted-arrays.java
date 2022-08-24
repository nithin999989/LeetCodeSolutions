class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int nums3[]=new int[nums1.length+nums2.length];
        int i;
        for( i=0;i<nums1.length;i++){
            nums3[i]=nums1[i];
        }
        for(int j=0;j<nums2.length;j++){
            nums3[i]=nums2[j];
            i++;
        }
        Arrays.sort(nums3);
        if(nums3.length%2==0){
            int x=nums3.length/2;
            int y=x-1;
            double k=(double)(nums3[x]+nums3[y])/2;
            return k;
        }
        else{
            int x=nums3.length/2;
            double k=nums3[x];
            return k;
        }
        
    }
}