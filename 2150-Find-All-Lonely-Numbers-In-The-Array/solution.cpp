class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int n:nums) mp[n]++;   // storing the frequency of all the numbers in the array
        for(pair<int,int>n:mp){
            int x=n.first,y=n.second;
            if(y==1 and mp.count(x+1)==0 and mp.count(x-1)==0){   // if count of that number is 1 and no adjacent number is present then it is a lonely number 
                ans.push_back(x);
            }
        }
        return ans;
    }
};