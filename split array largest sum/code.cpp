class Solution {
public:


bool check(int mx,int k,vector<int> &nums){


int required=1,j=0,curr=0;
while(j<nums.size()){

curr+=nums[j];
if(curr>mx)
required++,curr=nums[j];
j++;
if(required>k)
return false;
}
// cout<<required<<"->"<<mx<<endl;


return true;

}

    int splitArray(vector<int>& nums, int k) {
        

     int sum=0,mx=INT_MIN;
     for(auto x:nums)
     sum+=x,mx=max(mx,x);
  if(k==1) return sum;
  else if(k>=nums.size()-1) return mx;


int low=mx,high=sum,ans=sum;
    while(low<=high){

    int mid=(low+high)/2;
    if(check(mid,k,nums))
    ans=min(ans,mid),high=mid-1;
    else
    low=mid+1;
    }

return ans;
    }
};
