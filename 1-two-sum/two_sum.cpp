// brute force approach with time complexity 0(n^2) and with space complexity O(1)

/* 
Intution

1.We will use nested loop in which we will keep two pointer like at first positon and second poition then we will on iterate
 until we reach end of the loop so like this we will do now lets jump into the code you will better understand
*/

int arr[]={1,2,3,4,5};
int target=7;
int n=10;
   vector<int> v;
        vector<int> v;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target)
                { v.push_back(i);
                    v.push_back(j);
                }
            }
        }

        return v;

}

// optimized approach we will use hash map

  unordered_map<int,int> mp;

     for(int i=0;i<nums.size();i++){

   
       int remaining=target-nums[i];

       if(mp.find(remaining)!=mp.end())
         return{mp[remaining],i};
          //cout<<mp[remaining]<<" "<<i;

        mp[nums[i]]=i;

     }
     
