class Solution {
public void solveSudoku(char[][] board) {
solve(board);

}
 public boolean solve(char[][] board) {
     for(int i=0;i<board.length;i++){
          for(int j=0;j<board[0].length;j++){
             if(board[i][j]=='.'){
                for(char p='1';p<='9';p++){
                   
                    if(isvalid(board,i,j,p)){
                        board[i][j]=p;
                        if(solve(board))
                            return true;
                        else
                         board[i][j]='.';   
                    }
                }
                 return false;
             }
          }
     }
     return true;
}

 public boolean isvalid(char[][] board,int ik,int jk,char p) {
      for(int i=0;i<board.length;i++){
          if(board[i][jk]==p){
              return false;
          }
          if(board[ik][i]==p){
              return false;
          }
          if (board[3 * (ik / 3) + i / 3][3 * (jk / 3) + i % 3] == p)
    return false;
}
return true;
      }
}