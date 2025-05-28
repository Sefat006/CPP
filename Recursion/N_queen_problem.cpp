#include <bits/stdc++.h>
using namespace std;


// এই ফাংশনের কাজ হচ্ছে, বোর্ডে যেভাবে কুইনগুলো বসানো আছে সেটা একটা সমাধান হিসেবে ans লিস্টে রেখে দেওয়া।
void addSolution(vector< vector<int> > &board, vector<vector<int>> &ans, int n){
    vector<int> temp; // একটা খালি ১-ডি লিস্ট নিচ্ছি, যাতে বোর্ডের অবস্থা ধরে রাখা যায়

    // পুরো বোর্ডটা ঘুরে ঘুরে প্রতিটি ঘর দেখে নিচ্ছি
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            temp.push_back(board[i][j]); // 2D বোর্ডের প্রতিটি ঘরের মান temp-তে একে একে রেখে দিচ্ছি
        }
    }

    ans.push_back(temp); // temp-তে থাকা সম্পূর্ণ বোর্ডের এই সঠিক কুইন বসানোর অবস্থা ans লিস্টে রেখে দিলাম
}


//check if it is safe to put queen on this row
bool isSafe(int row, int col, vector<vector<int>> &board, int n){
    int x = row;
    int y = col;

    // check does same row have any queen
    // == 1 means if there is any queen, if queen exit, then its not safe and it will change the column 1 backward (y--)
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
    while( x<n && y>=0 ){
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