class Solution {
public:
    //similar to count -ve's in a sorted matrix(1351)
    //Binary - search
    bool Helper(vector<int> arr,int target)
    {
        int low=0;
        int high=arr.size()-1;
    
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(arr[mid] == target) return true;            
            else if(arr[mid] < target) low=mid+1;               
            else high=mid-1;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        for (int i=0; i<matrix.size(); i++){
            if(Helper(matrix[i],target)) return true;;
        }
        
        return false;
    }
};


