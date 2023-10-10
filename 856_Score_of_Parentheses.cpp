class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char> st;

        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(count);
                count=0;
            }else{
                count = st.top() +  max(2 * count,1);
                st.pop();
            }

        }
        return count;
        
    }
};
