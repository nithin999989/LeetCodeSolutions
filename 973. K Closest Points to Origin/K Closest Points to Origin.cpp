//Problem Link: https://leetcode.com/problems/k-closest-points-to-origin/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<int,int>> pq;
        int n=points.size();
        for(int i=0;i<n;i++){
            int dis = pow(points[i][0],2) + pow(points[i][1],2);
            pq.push({dis,i});
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            pair<int,int> temp=pq.top();
            ans.push_back(points[temp.second]);
            pq.pop();
        }
        return ans;
    }
};
