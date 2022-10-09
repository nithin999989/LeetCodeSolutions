class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int sum=0,count=0;
        unordered_map<int,int> m;
     
        for(int i=0;i<n;i++){
            sum += nums[i];
            
            if(sum==k) count++;
            
            if(m.find(sum-k)!=m.end()){
                count += m[sum-k];  
            } 
            
            m[sum]++;       
        }
        return count;
    }
};



//EXPLANATION:-

//1-We are using HashMap to store the prefix sum count.
    
//2-Traverse through the array and keep on adding the elements to sum and check if sum is equal to k (subarray of a single element).
    
//3-Now, check if (sum-k) is present in the unordered map if it is present it just means that a subarray exists which has a sum equal to k.
    
//4-if (sum-k) doesn't exist just insert the sum to the unordered map. as the sum is the sum of the array up to that index.
    
//5-Time complexity: O(n).