class Solution {
public:
    //Use stack property to solve this problem
    int longestValidParentheses(string s) 
    {
        //storing open parenthesis index in stack 
        stack<int> st;
        // initially push -1 to the stack to avoid close parenthesis ')'
        st.push(-1);            
        
        int count = 0;
        
        // iterate over the string
        for(int i=0;i<s.size();i++)
        {
            // if it is open parenthesis '(' then push its index into the stack
            if(s[i] == '(')
                st.push(i);
            
            // if close pathenthesis ')' occur from pop the stack 
            else
            {
                st.pop();
                
                // check whether the stack is empty or not if it is empty 
                // then push current index into it because if there is another ')' 
                //then we can not pop index from our stack
                if(st.empty())
                    st.push(i);
                
                // if it is not empty then find the length between the (current index i 
                // and index at stack top) and store max value
                else
                    count = max(count,i-st.top());
            }
        }
 
        return count;
    }
};