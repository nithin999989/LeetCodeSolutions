class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0){
                swap(nums[k++],nums[i]);
            }
        }
    }
};



//using extra space

 // int n=nums.size();
//  int c=0;
//         vector<int> v;
//         for(auto x: nums){
//             if(x==0) c++;
//             else{
//                 v.push_back(x);
//             }
//         }
//         for(int i=0;i<c;i++){
//             v.push_back(0);
//         }
        
//         nums = v;