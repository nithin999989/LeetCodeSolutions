class Solution {
    private int[][] result = new int[9][9];
    private boolean[][] modifiable = new boolean[9][9];

    public void solveSudoku(char[][] board) {
        markModifiable(board);
        recurse(0);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                board[i][j] = Integer.toString(result[i][j]).charAt(0);
            }
        }
    }

    private void markModifiable(char[][] board) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                modifiable[i][j] = (board[i][j] == '.');
                if (!modifiable[i][j]) {
                    result[i][j] = Integer.parseInt(String.valueOf(board[i][j]));
                }
            }
        }
    }

    private boolean recurse(int idx) {
        if (idx == 81) {
            return true;
        }

        int row = idx / 9;
        int column = idx % 9;

        for (int candidate = 1; candidate < 10; candidate++) {
            if (modifiable[row][column]) {
                result[row][column] = candidate;
                if (isValid(row, column) && recurse(idx + 1)) {
                    return true;
                }
            } else {
                return recurse(idx + 1);
            }
        }
        result[row][column] = 0;
        return false;
    }

    private boolean isValid(int i, int j) {
        return isValidRow(i) && isValidColumn(j) && isValidBlock(i, j);
    }

    private boolean isValidRow(int i) {
        boolean[] seen = new boolean[10];
        for (int j = 0; j < 9; j++) {
            int value = result[i][j];
            if (seen[value] && value != 0) {
                return false;
            }
            seen[value] = true;
        }
        return true;
    }

    private boolean isValidColumn(int j) {
        boolean[] seen = new boolean[10];
        for (int i = 0; i < 9; i++) {
            int value = result[i][j];
            if (seen[value] && value != 0) {
                return false;
            }
            seen[value] = true;
        }
        return true;
    }

    private boolean isValidBlock(int i, int j) {
        boolean[] seen = new boolean[10];
        for (int row = (i / 3) * 3; row < (i / 3) * 3 + 3; row++) {
            for (int column = (j / 3) * 3; column < (j / 3) * 3 + 3; column++) {
                int value = result[row][column];
                if (seen[value] && value != 0) {
                    return false;
                }
                seen[value] = true;
           }
        }
        return true;
    }
}
