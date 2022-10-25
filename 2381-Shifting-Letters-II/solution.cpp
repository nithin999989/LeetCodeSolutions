class Solution {
public:
string shiftingLetters(string s, vector<vector<int>> &shifts) {
        int n = s.length();
        vector<int> v(n+1);
        for (auto shi : shifts) {
            int add = 1;
            if(shi[2] == 0)
                add = -1;
            v[shi[0]] += add;
            v[shi[1] + 1] -= add;
        }
        for (int i = 1; i < n; i++)
            v[i] += v[i - 1];
        for (int i = 0; i < n; i++) {
            auto curr = s[i] - 'a';
            auto ne = ((curr %26 + v[i] % 26 + 26) % 26);
            // cout << curr << " " << v[i] << endl;
            s[i] = 'a' + ne;
        }
        return s;
    }
};