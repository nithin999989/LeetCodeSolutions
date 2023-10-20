class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int id, int vd) {
        vector<pair<int,int>>maxval,minval;
        int n=nums.size();
        int mn=INT_MAX,mx=INT_MIN;
        int mni,mxi;
        for(int i=n-1;i>=0;i--)
        { 
            if(nums[i]<mn)
            {
             mni=i;
             mn=nums[i];
            }
            if(nums[i]>mx)
            {
             mxi=i;
             mx=nums[i];
            }
            maxval.push_back({mx,mxi});
             minval.push_back({mn,mni});
        }
        reverse(maxval.begin(),maxval.end());
         reverse(minval.begin(),minval.end());
       for(int i=0;i<n;i++) 
       {
           int j=i+id;
           if(j<n)
           {
              
               if(abs(nums[i]-minval[j].first)>=vd)
               return {i,minval[j].second};
                if(abs(nums[i]-maxval[j].first)>=vd)
               return {i,maxval[j].second};
           }
       }
       return {-1,-1};
    }
};