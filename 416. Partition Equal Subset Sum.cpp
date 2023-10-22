class Solution {
public:
bool subsetSumToK(int n, int k,vector<int>& arr) {
    int static t[10000][10000];
    int i, j;
    for( i = 0; i<n+1; i++){
      for (j = 0; j < k + 1; j++) {
        if (i == 0)
          t[i][j] = false;
        if (j == 0)
          t[i][j] = true;
      }
    }

    for(int i = 1;i<n+1; i++){
        for(int j = 1; j<k+1; j++){
            

if(arr[i-1] <= j){
    t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];

}else{
    t[i][j] = t[i-1][j];

 
        }
    }
}
return t[n][k];

   
}
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum = sum + nums[i];

        }
        if(sum%2 != 0) return false;

        else{
            return subsetSumToK(n, sum/2, nums);
        }
        
    }
};
