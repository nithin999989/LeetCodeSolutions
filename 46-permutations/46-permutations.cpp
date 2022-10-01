class Solution {
public:
    //tc :- n! + n
    vector<vector<int>> m;
    void solve(vector<int>nums,int index)
    {
        if(nums.size() <= index){
            m.push_back(nums);
            return;
        }
        
        for(int i=index; i<nums.size(); i++){
            swap(nums[index],nums[i]);
            solve(nums,index+1);
            swap(nums[index],nums[i]);  //backtrack
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums,0);
        return m;
    }
};