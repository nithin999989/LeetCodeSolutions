class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();  
        sort(nums.begin() , nums.end());  
        vector<vector<int>> ans;  
        
        set<vector<int>> store;   // to store and remove the dup.(nice idea)
		
        for(int i = 0 ; i < n; i++){
		
            for(int j = i + 1; j < n ; j++){
			
                int new_target  =  target - nums[i] - nums[j];
                
                int x = j+1;
                int y = n-1;
                
                while(x < y){
				
                    int sum = nums[x] + nums[y];
                    
                    if(sum > new_target) y--;
                    else if(sum < new_target ) x++;
                    else {                           
                        store.insert( {nums[i],nums[j],nums[x],nums[y]} );
        
                        x++;
                        y--;
                    };
                }
            }
        }
		
        for(auto i : store){
            ans.push_back(i);  // store the answers in an array(ans)
        }
		
        return ans;
    }
};