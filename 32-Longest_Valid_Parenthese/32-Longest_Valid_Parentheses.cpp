class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();
        int ans = 0;

         int l = 0, r = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '(') l++;
            else r++;

            if(l == r) ans = max(ans, 2*l);
            if(r > l){
                r = 0;
                l = 0;
            }
        }
        l=0;
        r=0;

        for(int i=n-1; i>=0; i--){
            if(s[i] == ')') r++;
            else l++;

            if(l==r) ans = max(ans,2*l);
            if(l>r){
                l=0;
                r=0;
            }
        }

        return ans;
    }
};