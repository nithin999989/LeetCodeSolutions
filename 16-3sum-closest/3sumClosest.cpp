class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());
        int ans = 0, n = nums.size();
        int diff = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int first = nums[i];
            int s = i + 1, e = n - 1;
            while (s < e)
            {
                if (first + nums[s] + nums[e] == target)
                    return target;
                else if (abs(first + nums[s] + nums[e] - target) < diff)
                {
                    diff = abs(first + nums[s] + nums[e] - target);
                    ans = first + nums[s] + nums[e];
                }
                if (first + nums[s] + nums[e] > target)
                    e--;
                else
                    s++;
            }
        }
        return ans;
    }
};