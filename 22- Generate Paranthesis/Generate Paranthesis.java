
/*
Strategy: Recursively create the paranthesis keeping in mind closing brackets always come after same or less number of opening brackets.
*/


class Solution {
    public List<String> generateParenthesis(int n) {
        List<String> res = new ArrayList<>();
        solve(res,"",0,0,n);
        return res;
    }
    public void solve(List<String> res, String curr, int o, int c, int n){
        if(curr.length()==n*2){
            res.add(curr);
            return;
        }
        if(o<n){
            solve(res,curr+"(",o+1,c,n);
        }
        if(c<o){
            solve(res,curr+")",o,c+1,n);
        }
    }
}