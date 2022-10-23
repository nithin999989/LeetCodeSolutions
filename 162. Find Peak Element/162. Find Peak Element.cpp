class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        vector<int> v;
        v.push_back(INT_MIN);
        int n = nums.size();

        if (n == 1)
        {
            if (nums[0] == INT_MIN)
            {
                return 0;
            }
            else if (nums[0] == INT_MAX)
            {
                return 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            v.push_back(nums[i]);
        }

        v.push_back(INT_MIN);

        int fix = 0;

        int N = v.size();

        for (int i = 1; i <= N - 2; i++)
        {
            if ((v[i] > v[i - 1]) && (v[i] > v[i + 1]))
            {
                fix = i;
                break;
            }
        }

        return fix - 1;
    }
};