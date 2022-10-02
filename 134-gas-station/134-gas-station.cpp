class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int start=0;
        int deficit=0;
        int balance=0;
        
        for(int i=0;i<gas.size();i++)
        {
            balance += gas[i]-cost[i];
            
              // If at any point our balance/ current fuel is negative that means we can't come               //to the i'th petrol pump from the previous pump.So we'll make the i'th pump as                //the start point .we'll also make the current fuel to be 0 as we're                            //starting freshly.
            if(balance<0){
                start=i+1;
                deficit += balance;
                balance = 0;
            }
        }
        //to check if we can cover the deficit that we left behind (if we did) after the end of         //list
        if(deficit + balance >=0) return start;
        return -1;
        
    }
};