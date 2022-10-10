class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        
         //Idea is to use 1st row and 1st col to save the 0 reset status
        // for the rows and cols. Now since position [0][0] will overlap
        // between the row and col status vector, we use 2 separate variables 
        // just to save whether 1st row/col needs a reset or not.
    
        // TC: O(MN)
        // SC: O(1)
        
        int r=matrix.size();
        int c=matrix[0].size();
        
        int first_row=-1;
        int first_col=-1;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(matrix[i][j]==0 && i==0){
                    first_row=1;
                }
                 if(matrix[i][j]==0 && j==0){
                    first_col=1;
                }
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        
        for(int i=1; i<r; i++)
        {
            for(int j=1; j<c; j++)
            {
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        
        if(first_row==1){
            for(int i=0;i<c;i++){
                matrix[0][i]=0;
            }
        }
        if(first_col==1){
            for(int i=0;i<r;i++){
                matrix[i][0]=0;
            }
        }
    }
};


//APPROACH->

//1-First check if there is any 0 in the first row or column and set the respective flag(first_row, first_col) to 1.
    
//2-Now, iterate from row 2 and column 2 and check if there is any zero present; fill the first row index ar[0][j] = 0 and first column index ar[i][0] = 0.
    
//3-Our first row and first column determine which rows and columns should be fully set to 0.
    
//4-Now, check if flag first_row == 1, means our first row itself should be made 0.
    
//5-Finally, check if flag first_col == 1, means our first column itself should be made 0.

    
    
//most optimised in o(1) space complexity
//other space oriented available go through them also
//https://leetcode.com/problems/set-matrix-zeroes/discuss/1961783/C%2B%2B-oror-3-approaches-oror-Easy-to-understand