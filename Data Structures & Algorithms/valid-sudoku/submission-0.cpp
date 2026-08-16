class Solution {
public:
    bool isValid(vector<vector<char>>& board,int row,int col){
        int n = board.size();
        int m = board[0].size();
        // row check
        for (int j = 0; j < m; j++){
            if (j != col && board[row][j] == board[row][col]) return false;
        }
        // col check
        for (int i = 0; i < n; i++){
            if (i != row && board[i][col] == board[row][col]) return false;
        }
        // 3 * 3 grid check
        /*
        1. Identify 3*3 block (row/3 * 3, col/3*3) gives starting row & col indexes
        2. Once finding out the block, slowly iterate through that block and
           check for duplicate
        */
        int startRow = (row/3) * 3;
        int startCol = (col/3) * 3;
        for (int drow = 0; drow < 3; drow++){
            for (int dcol = 0; dcol < 3; dcol++){
                int r = startRow + drow;
                int c = startCol + dcol;
                if ((r != row || c != col) && board[r][c] == board[row][col]) return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                if (board[i][j] != '.' && !isValid(board,i,j)) return false;
            }
        }
        return true;
    }
};
