class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<arr.size();i++){
            pq.push({abs(arr[i]-x),arr[i]});
              if(pq.size()>k)
                  pq.pop();
            }
        vector<int> ans;
        while(pq.size()>0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//using max-heap: above

// ->make a max-heap and keep storing the pair of (absolute difference with x, corresponding key)
// ->if the size of heap becomes more than k, just pop it (this will remove the element with largest absolute difference).
// ->like this iterate over the array.
// ->return the elements of the heap.
    
//  using SORTING :-    

//  vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         int n = arr.size();
//         vector<pair<int,int>> p;
//         vector<int> tmp;
        
//         for(int i=0;i<n;i++){
//             int y = abs(arr[i]-x);
//             p.push_back({y,arr[i]});
//         }
        
//         sort(p.begin(),p.end());
        
//         for(int i=0; i<k; i++){
//             tmp.push_back(p[i].second);
//         }
        
//         sort(tmp.begin(),tmp.end());
        
//         return tmp;
//     }