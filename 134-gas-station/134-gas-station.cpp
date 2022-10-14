class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
	{
        int n = gas.size();
        int total(0), subsum(INT_MAX), start(0);
        for(int i = 0; i < n; ++i)
		{
            total += gas[i] - cost[i];
            if(total < subsum) 
			{
                subsum = total;
                start  = i + 1;
            }
        }
        return (total < 0) ?  -1 : (start % n); 
    }
};
