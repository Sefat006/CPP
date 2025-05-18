#include <bits/stdc++.h>
using namespace std;


void addSolution(vector< vector<int> > &board, vector<vector<int>> &ans, int n){
    vector<int> temp;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp.push_back(board[i][j]);
        }
    }

    ans.push_back(temp);
}

//check if it is safe to put queen on this row
bool isSafe(int row, int col, vector<vector<int>> &board, int n){
    int x = row;
    int y = col;

    // check does same row have any queen
    while( y >= 0){
        if( board[x][y] == 1 ){
            return false;
            y--;
        }
    }

    x = row; y = col;
    // check for diagonal
    while( x>=0 && y>=0 ){
        if( board[x][y] == 1 ){
            return false;
            y--;
            x--;
        }
    }


    x = row; y = col;
    // check for diagonal
    while( x<0 && y>=0 ){
        if( board[x][y] == 1 ){
            return false;
            y--;
            x++;
        }
    }
    return true;
}

void solve(int col, vector< vector<int>> &ans, vector< vector<int> > &board, int n){
    // base case
    if( col == n){
        addSolution(board, ans, n);
        return ;
    }

    // solve 1 case and rest recursion will handle
    for(int row = 0; row<n; row++){
        // 1. check if it is safe to put queen on this row
        if( isSafe(row, col, board, n)){
            // if placing queen is safe
            board[row][col] = 1; // put the queen on that row;

            // then check for the next col
            solve(col+1, ans, board, n); 

            // backtrack
            board[row][col] = 0;
        }
    }
}

// n = number of queens
// queens = 1
// empty queen = 0;
vector< vector<int> > nQueens(int n){
    // This line creates a 2D vector (or "matrix") called board of size n x n, and fills it with zeros (n,0).
    // bcz 0 means no queen (we didn't put any queen, just created the board)
    vector< vector<int> > board(n, vector<int>(n,0));
    vector< vector<int> > ans;

    solve( 0, ans, board, n);

    return ans;
}