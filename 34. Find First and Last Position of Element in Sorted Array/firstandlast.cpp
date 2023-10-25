/*intituion is very simple so here we can use linear search and in that we will search from beginning and end one by one and  whenever we found our target 
 we will return  the index from thier itself now lets jump into code
*/

/*
Time complexity - O(n+n) so basically its O(2n) and its will be considred as O(n)

Space complexity - O(1)
*/

vector<int> searchRange(vector<int>& nums, int target) {
   int flag1=-1,flag2=-1;
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
              v.push_back(i);
               flag1=1;
                break;
        }
        }

          for(int i=nums.size();i>=0;i--){
            if(target==nums[i]){
              v.push_back(i);
               flag2=1;
                break;
        }
          }
          if(flag1==-1 && flag2==-1){
            v.push_back(-1)
            v.push_back(-1);
            return v;
          }

          return v;  
        }  
    }
  /*
  Now here we have optimized approach  in we have we are  using binary search algorithm  
   with time complexity of O(logn)
    and space compexity of O(1)
  */  

int low(vector<int> nums ,int target){

int s=0;
int e=nums.size()-1;
int ans=-1;
while(s<=e){
    int mid=s+(e-s)/2;

    if(nums[mid]==target){
        ans=mid;
        e=mid-1;
    }else if(target>nums[mid]){
         s=mid+1;
    }else{
        e=mid-1;
    }
}
return ans;
    
}

int upper(vector<int> nums ,int target){

    int s=0;
    int e=nums.size()-1;
    int ans=-1;
    while(s<=e){
     int mid=s+(e-s)/2;

    if(nums[mid]==target){
        ans=mid;
        s=mid+1;
    }else if(target> nums[mid]){
         s=mid+1;
    }else{
        e=mid-1;
    }
    }

    return ans;
}

  vector<int> searchRange(vector<int>& nums, int target) {
    
        /*int lb=low(nums,target);
        int ub=upper(nums,target);

        return {lb,ub};
        */
         int ans1=-1,ans2=-1;
        if(binary_search(nums.begin(),nums.end(),target)){
            ans1 =lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            ans2 =upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;
        }

        return {ans1,ans2};

