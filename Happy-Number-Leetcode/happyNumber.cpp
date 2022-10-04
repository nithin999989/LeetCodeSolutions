class Solution {
public:
    bool isHappy(int n) {
        long long int sum=0;
            while(n){
                int a = n%10;
                sum+=pow(a,2);
                n=n/10;
            }
            if(sum==1){
                return true;
            }
            if(sum==89){
                return false;
            }
            else{
                return isHappy(sum);
            }
    }
    
};

