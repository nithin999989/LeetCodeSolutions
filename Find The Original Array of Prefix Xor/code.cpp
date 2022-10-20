class solution
{
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> result(pref.size());
        result[0] = pref[0];
        for (int i = 1; i < pref.size(); ++i) {
            result[i] = pref[i] ^ pref[i - 1];
        }

        return result;
    }
