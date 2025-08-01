#include<vector>
#include<iostream>
using namespace std;

bool issafe(vector<vector<char>>& board, int row, int colm, char dig) {
    // Check horizontal row
    for (int j = 0; j < 9; j++) {
        if (board[row][j] == dig) {
            return false;
        }
    }

    // Check vertical column
    for (int i = 0; i < 9; i++) {
        if (board[i][colm] == dig) {
            return false;
        }
    }

    // Check 3x3 grid
    int srow = (row / 3) * 3;
    int scolm = (colm / 3) * 3;

    for (int i = srow; i < srow + 3; i++) {
        for (int j = scolm; j < scolm + 3; j++) {
            if (board[i][j] == dig) {
                return false;
            }
        }
    }

    return true; // The digit can safely be placed
}

bool helper(vector<vector<char>>& board, int row, int colm) {
    if (row == 9) {
        return true; // Base case: Entire board is filled
    }

    // Move to the next row if column exceeds
    int nxtrow = row;
    int nxtcolm = colm + 1;
    if (nxtcolm == 9) {
        nxtrow = row + 1;
        nxtcolm = 0;
    }

    // Skip cells that are already filled
    if (board[row][colm] != '.') {
        return helper(board, nxtrow, nxtcolm);
    }

    // Try placing digits '1' to '9'
    for (char dig = '1'; dig <= '9'; dig++) {
        if (issafe(board, row, colm, dig)) {
            board[row][colm] = dig; // Place the digit

            if (helper(board, nxtrow, nxtcolm)) {
                return true; // If it leads to a solution, return true
            }

            board[row][colm] = '.'; // Backtrack
        }
    }

    return false; // No solution found for this path
}

void solveSudoku(vector<vector<char>>& board) {
    helper(board, 0, 0); // Start solving from the top-left corner
}

int main(){
vector<vector<char>> board = {
    {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
    {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
    {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
    {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
    {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
    {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
    {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
    {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
    {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
};

solveSudoku(board);

for(int i=0; i<9; i++){
    for(int j=0; j<9; j++){
        cout<<board[i][j]<<" ";
}
cout<<endl;
}
}