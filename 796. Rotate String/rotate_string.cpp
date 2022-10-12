//796: Rotate String
//Problem link:https://leetcode.com/problems/rotate-string/
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
                    return 0;
            }
            unordered_map<string,int>k;
            string t="";
            for(int i=0;i<s.size();i++){
                    t+=s[i];
                    k[t]++;
                    k[s.substr(i+1,s.size()-i-1)]++;
            }
            t="";
            for(int i=0;i<goal.size();i++){
                    t+=goal[i];
                    if(k[t] && k[goal.substr(i+1,goal.size()-i-1)])
                    {
                            if(t==goal.substr(i+1,goal.size()-i-1 && k[t]>1)){
                                    return 1;
                            }
                            if(t!=goal.substr(i+1,goal.size()-i-1)){
                                    return 1;
                            }
                    }
            }
            return 0;

    }
};
