class Solution {
public:
    //optimized sol using Binary Search
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        int n = letters.size();
        int s = 0, e = n-1;
        char ans;
        
        while(s <= e){
            int mid = s + (e-s)/2;
            
            if(letters[mid] <= target) s = mid+1;
            else{
                e = mid-1;
            }
        }
        
        // if (s == n) then return letters[0]
        // else return letters[s]
        return letters[s % n];
    }
};

//binary search
// Time complexity: O(logn)
// Explanation: Apply binary search to find the index of the element greater to target, return the index in by using modulo arithmetic (letters [low % n], if there no such index exists, then low pointer will become equal to size of array, and n%n=0, so it will return first element of array.