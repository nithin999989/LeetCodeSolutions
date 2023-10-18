class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        
        set<vector<int>>s;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    long long int value=(long long) target-(long long) nums[i]-(long long) nums[j]-(long long) nums[k];
                    if(binary_search(nums.begin()+k+1,nums.end(),value)){
                        vector<int>pre;
                        pre.push_back(nums[i]);
                        pre.push_back(nums[j]);
                        pre.push_back(nums[k]);
                        pre.push_back(value);
                        sort(pre.begin(),pre.end());
                        s.insert(pre);
                    }
                }
            }
        }
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
        
    }
};