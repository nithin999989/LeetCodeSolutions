class Solution {
public:
    string reorganizeString(string s) {
        int size=s.size();
        if(size==1)
            return s;
        unordered_map<char,int> mp;
        string ans="";
        for(auto it:s)
            mp[it]++;
        if(mp.size()==1)
            return "";
        priority_queue<pair<int,char>> pq;   //max priorityQueue
        for(auto it:mp)
            pq.push({it.second,it.first});
        pair<int,char> pr=pq.top();
        pq.pop();
        ans+=pr.second;
        pr.first--;
        while(pq.top().first){
            pair<int,char> p=pq.top();
            pq.pop();
            ans+=p.second;
            p.first--;
            pq.push(pr);
            pr=p;
        }
        if(ans.size()==size)
            return ans;
        return "";
    }
};