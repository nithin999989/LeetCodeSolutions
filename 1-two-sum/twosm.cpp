Strategy 1: Naive Algorithm --> 2 For Loops.
Time Complexity: O(n²) --> 300ms to 900ms

We will check for every first & second. if (nums[first] + nums[second] == target) return {first, second}. This is simple but extremely slow. I would net recommend this method at all.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int first = 0; first < nums.size(); first++){
			//For every first ...
            for (int second = first + 1; second < nums.size(); second++){
				//... and second, ...
                if (nums[first] + nums[second] == target){
				//... if nums[first] + nums[second] == target then return {first, second}.
                    return {first, second};
                }
            }
        }
		//If there is no solution return an empty vector.
        return {};
    }
};
Strategy 2: Two Pointer Algorithm --> Sort & Two Pointer.
Time Complexity: O(n * log(n)) --> 8ms to 12ms.

We will sort the array. We will have two pointers, left & right. Originally at the beginning and end of the array. Loop while
left < right. For each iteration:

if nums[left] + nums[right] == target, return {left, right}.
if nums[left] + nums[right] < target, left++.
else right--.
The trick here is that we will make a new vector with values and index. So when we find the two numbers we can return the index. This solution is fast but takes long to write.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Create a new vector with pairs instead of just values.
        vector<pair<int, int>> pairs;
        
        for (int index = 0; index < nums.size(); index++){
            pairs.push_back({nums[index], index});
        }
        
        //Sort the vector.
        sort(pairs.begin(), pairs.end());
        
        //Initialise left & right pointers.
        int left = 0;
        int right = nums.size()-1;
        
        //While left < right.
        while(left < right){
            //If the total of nums[left] and nums[right] == target return left and right
            if (pairs[left].first + pairs[right].first == target){
                return {pairs[right].second, pairs[left].second};
            }
            //If the total of nums[left] and nums[right] < target left++ to make total bigger.
            if (pairs[left].first + pairs[right].first < target){
                left++;
            }
            //If the total of nums[left] and nums[right] > target right-- to make total smaller.
            else{
                right--;
            }
        }
        //If there is no solution return an empty array.
        return {};
    }   
};
Strategy 3: Hash Map Algorithm --> 1 For Loop.
Time Complexity: O(n) --> 4ms to 8ms.

We will iterate through the array, if map, an unorered_map, stores the target - current value. We will return the indices of these two values.
This is the fastest method of all.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
        //We will store our values and the indices here.
        unordered_map<int,int> map;        
		
        //We iterate through the loop.
        for(int index = 0; index < nums.size(); index++){
			if(map.find(target-nums[index]) != map.end()){
                //If map contains the value target - nums[index] return the indices of these two values.
                return {index, map[target-nums[index]]};
            }			
            map[nums[index]] = index;
            //If nota dd nums[index] to map.
        }
        
        //If there is no solution return an empty vector.        
        return {};
    }   
};