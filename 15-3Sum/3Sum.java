
/*
Strategy: Sort the array to solve in O(N^2) time complexity. Make checks to avoid duplicates.
*/



class Solution {
    public List<List<Integer>> threeSum(int[] arr) {
        List<List<Integer>> res = new ArrayList<>();
        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++){
            int l=i+1;
            int r=arr.length-1;
            int tar = 0 - arr[i];
            while(l<r){
                if(arr[l]+arr[r] == tar){
                    List<Integer> list = new ArrayList<>();
                    list.add(arr[i]);
                    list.add(arr[l]);
                    list.add(arr[r]);
                    res.add(list);
                    while(l+1<arr.length && arr[l]==arr[l+1]){
                        l++;
                    }
                    l++;
                    while(r-1>=0 && arr[r]==arr[r-1]){
                        r--;
                    }
                    r--;
                }
                else if(arr[l] + arr[r] <tar){
                    while(l+1<arr.length && arr[l]==arr[l+1]){
                        l++;
                    }
                    l++;
                }
                else{
                    while(r-1>=0 && arr[r]==arr[r-1]){
                        r--;
                    }
                    r--;
                }
            }
            while(i+1<arr.length && arr[i]==arr[i+1]){
                i++;
            }
        }
        return res;
    }
}