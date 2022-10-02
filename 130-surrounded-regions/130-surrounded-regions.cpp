class Solution {
public:
    //we have applied kind of a Boundary DFS
    void convert(vector<vector<char>>& board, int m, int n){
        for(int i=0 ;i<m ;i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == 'B'){
                    board[i][j] = 'O';
                }
                else if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
    }
    
    bool isValid(int i, int j, int m, int n, vector<vector<char>>& board){
        if(i>=0 && i<m && j>=0 && j<n && board[i][j] == 'O'){
            return true;
        }
        return false;
    }
    
    void dfs(vector<vector<char>>& board, int i, int j, int m, int n)
    {
        board[i][j] = 'B';
        
        if(isValid(i+1,j,m,n,board)){
            dfs(board,i+1,j,m,n);
        }
        if(isValid(i-1,j,m,n,board)){
            dfs(board,i-1,j,m,n);
        }
        if(isValid(i,j+1,m,n,board)){
            dfs(board,i,j+1,m,n);
        }
        if(isValid(i,j-1,m,n,board)){
            dfs(board,i,j-1,m,n);
        }
    }
    
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        
        for(int j=0; j<n; j++){
            
            //top: left -> right
            int i=0;
            if(board[i][j] == 'O'){
                dfs(board,i,j,m,n);
            }
            
            //bottom: left -> right
            i=m-1;
            if(board[i][j] == 'O'){
                dfs(board,i,j,m,n);
            }
        }
        
        for(int i=0; i<m; i++){
            
            //left: top -> bottom
            int j=0;
            if(board[i][j] == 'O'){
                dfs(board,i,j,m,n);
            }
            
             //right: top -> right
            j=n-1;
            if(board[i][j] == 'O'){
                dfs(board,i,j,m,n);
            }
        }
    
        convert(board,m,n);
    }
};

// Approach- We apply dfs on all Os that are on boundary and mark them as B,then we just need to traverse the matrix and flip remaining Os to X as these are the ones that are completely surrounded by X. Also,we flip back the Bs to Os.