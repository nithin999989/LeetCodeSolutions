class Solution {
public:
  vector<string> topKFrequent(vector<string> &v, int k) {
    unordered_map<string, int> mp;
    for (auto &x : v) {
      mp[x]++;
    }

    auto cmp = [&](pair<int, string> &a, pair<int, string> &b) {
      if (a.first == b.first)
        return (a.second > b.second);
      else
        return a.first < b.first;
    };

    priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(cmp)>
        pq(cmp);
    for (auto &[ko, vo] : mp) {
      pq.push({vo, ko});
    }
    vector<string> ans;
    int cnt = 0;

    while (!pq.empty() and cnt < k) {
      ans.push_back(pq.top().second);
      pq.pop();
      cnt++;
    }
    return ans;
  }
};
