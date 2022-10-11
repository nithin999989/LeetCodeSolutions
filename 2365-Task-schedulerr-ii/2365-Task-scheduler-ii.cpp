class Solution {
public:
    long long taskSchedulerII(vector<int>& tasks, int space) {
        unordered_map<long long, long long>mapp;
        long long res=tasks.size();
        
        vector<long long>arr(tasks.size());
        long long c=0;
        
        for(int i=0;i<tasks.size();i++)
        {
            // if element is already present in the map
            if(mapp.find(tasks[i])==mapp.end())
            {
                mapp[tasks[i]]=i;
                c++;
                arr[i]=c;
            }
            else
            {
                c++;
                long long time=c-arr[mapp[tasks[i]]]-1;
                
                long long x=0;
                x=max(x,space-time);
                c+=x;
                arr[i]=c;
                mapp[tasks[i]]=i;
            }
        }
        return arr[tasks.size()-1];
    }
};