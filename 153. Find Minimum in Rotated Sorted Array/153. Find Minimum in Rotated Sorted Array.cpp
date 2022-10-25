class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int start = 0;
        int end = nums.size() - 1;
        while (start < end)
        {
            int mid = start + (end - start) / 2;
            // right side is rotated, expecting smallest number between mid + 1 <=  end;
            if (nums[mid] > nums[end])
            {
                start = mid + 1;
            }
            else
            {
                // Right side is sequential, which  implies
                // left is either sequential or rotated. Either case, we can find minimum from values at between start <= mid index.
                // e.g.
                // 1 2 3 4  5 6 7   ( 4 is mid)
                // 8  9 4 5 6 7     (say 4 is mid)
                // 8 9 1 4 5 6 7
                end = mid;
            }
        }
        return nums[start];
    }
};