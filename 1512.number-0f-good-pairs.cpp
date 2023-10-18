// Time: 0ms(100%), Space: 7.6MB(57.31%)
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        vector<int> arr(101,0);
        int count = 0;
        for(int i=0; i<nums.size(); i++) {
            count = count + arr[nums[i]];
            arr[nums[i]]++;
        }
        return count;
    }
};