class Solution {
public:
int arrayPairSum(vector& nums) {
sort(nums.begin(),nums.end());
int sum =0;
for(int i=0;i<nums.size();i++)
{
sum+=nums[i];
i++;
}
return sum;
}
};