class Solution
{
public:
    vector<int> findSubstring(string s, vector<string> &words)
    {
        int wordsquan = words.size();
        int wordsleng = words[0].size();
        int target = wordsquan * wordsleng;
        unordered_map<string, int> unmap;

        for (int j = 0; j < wordsquan; j++)
        {
            unmap[words[j]]++;
        }
        vector<int> ans;
        if (s.size() < target)
        {
            return ans;
        }
        for (int i = 0; i <= s.size() - target; i++)
        {
            unordered_map<string, int> unmap2;
            unmap2 = unmap;
            int k;
            for (k = 0; k < wordsquan; k++)
            {
                string s1 = s.substr(i + k * wordsleng, wordsleng);
                if (unmap2.count(s1) == 0)
                    break;
                else if (unmap2[s1] != 0)
                    unmap2[s1]--;
                else
                    break;
            }

            if (k == wordsquan)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};