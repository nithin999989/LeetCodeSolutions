class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int balance = 0;
        int deficit = 0;
        int start = 0;
        
        for(int i=0;i<gas.size();i++){
            balance+=gas[i]-cost[i];

            if(balance<0){
                deficit+=balance;
                start=i+1;
                balance=0;
            }
        }

        if(balance+deficit >= 0){
            return start;
        }else{
            return -1;
        }
    }
};
