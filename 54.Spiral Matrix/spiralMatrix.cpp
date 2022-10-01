class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        
        vector<int> sol;
        int total=r*c;
        int cs=0, ce=c-1;
        int rs=0, re=r-1;
        int count=0;
        while(count<total){
            for(int i=cs; count<total && i<=ce; i++){
                sol.push_back(matrix[rs][i]);
                count++;
            }
            rs++;
        
            for(int i=rs; count<total && i<=re; i++){
                sol.push_back(matrix[i][ce]);
                count++;
            }
            ce--;
        
            for(int i=ce; count<total && i>=cs; i--){
                sol.push_back(matrix[re][i]);
                count++;
            }
            re--;
        
            for(int i=re; count<total && i>=rs; i--){
                sol.push_back(matrix[i][cs]);
                count++;
            }
            cs++;     
        }
        return sol;
    }
};