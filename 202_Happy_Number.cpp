class Solution {
public:
    bool isHappy(int n) {

while(n!=1 && n!=4){
            int sum = 0;

while(n){

    int last = n%10;
    sum = sum + (last*last);
    n=n/10;

}


n=sum;
}
return n==true;
        
    }
};
