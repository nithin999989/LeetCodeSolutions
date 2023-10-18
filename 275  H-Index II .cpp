class Solution {
public:
    int hIndex(vector<int>& citations) {
        int min = 0, max = citations.size();
        int mid;

        while (min < max) {
            mid = (min + max + 1) / 2;
            if (isH(mid, citations)) {
                min = mid;
            } else {
                max = mid - 1;
            }
        }
        return min;
    }

    bool isH(int h, vector<int>& citations) {
        int count = citations.size();
        for (auto citation: citations) {
            if (citation < h) count -= 1;
            if (count < h) return false;
        }
        return true;
    }
};
