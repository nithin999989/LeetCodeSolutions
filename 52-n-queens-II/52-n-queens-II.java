import java.util.Arrays;
import java.util.Scanner;

public class NQueens {
    public static void main(String[] args) {
        System.out.println("Enter n:");
        Scanner in = new Scanner(System.in);
        int n = in .nextInt();
        createBoard(n);
    }

    public static void createBoard(int n) {
        int[][] board = new int[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                board[i][j] = 0;
            }
        }
        int noOfWays = placeNQueens(board, n, 0);
        System.out.println("No of way to place " + n + " Queens is " + noOfWays);
    }

    public static int placeNQueens(int[][] board, int n, int row) {
        if(row == n){
            printBoard(board);
            return 1;
        }
        int count = 0;
        for(int col = 0;col < n;col++){
            if(isSafe(board, row, col)){
                board[row][col] = 1;
                count += placeNQueens(board, n, row+1);
                board[row][col] = 0;
            }
        }
        return count;
    }

    public static boolean isSafe(int[][] board, int r, int c) {
        for(int i=0;i<r;i++){
            if(board[i][c] == 1) return false;
        }
        int maxLeft = Math.min(r, c);
        for(int i=1;i<=maxLeft;i++){
            if(board[r-i][c-i] == 1) return false;
        }
        int maxRight = Math.min(r, board.length - c - 1);
        for(int i=1;i<=maxRight;i++){
            if(board[r-i][c+i] == 1) return false;
        }
        return true;
    }

    public static void printBoard(int[][] board) {
        for(int[] a : board){
            System.out.println(Arrays.toString(a));
        }
        System.out.println();
    }
}