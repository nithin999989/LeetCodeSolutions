class Solution
{
public:
    vector<int> res;
    Solution()
    {
        res = vector<int>(20, -1);
    }
    int numTrees(int n)
    {
        if (n == 0)
            return 1;
        if (n == 1)
            return 1;
        if (res[n] > -1)
            return res[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int l = i;
            int r = n - 1 - i;
            sum += numTrees(l) * numTrees(r);
        }
        res[n] = sum;
        return sum;
    }
};