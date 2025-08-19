#include <bits/stdc++.h>
using namespace std;

void addSolution(vector<vector<int>> &board, vector<vector<int>>&ans, int n){
    vector<int> temp;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            temp.push_back(board[i][j]);
        }
    }

    ans.push_back(temp);
}

bool isSafe(int row, int col, vector<vector<int>>&board, int n){
    int x=row, y=col;

    while( y>=0){
        if( board[x][y]==1){
            return false;
            y--;
        }
    }

    x=row; y=col;
    while(x>=0 && y>=0){
        if(board[x][y] == 1){
            return false;
            x--; y--;
        }
    }

    x=row;y=col;
    while( x<n && y<=0){
        if(board[x][y]==1){
            return false;
            x++;y--;
        }
    }

    return true;
}

void solve(int col, vector<vector<int>> &board, vector<vector<int>>&ans, int n){
    if( col == n){
        addSolution(board, ans, n);
    }

    for(int row=0; row<n; row++){
        if( isSafe(row, col, board, n)){
            board[row][col] = 1;
            solve(col+1, board, ans, n);
            board[row][col]=0;
        }
    }
}

vector< vector<int>> n_queen(int n){
    vector< vector<int>> board(n, vector<int> (n,0));
    vector< vector<int>> ans;

    solve(0, board, ans, n);

    return ans;
}

int main()
{
    int n;
    cout<<"enter the number of queens ";
    cin>>n;

    vector<vector<int>> ans = n_queen(n);

    cout<<"Total Solutions "<< ans.size()<<endl;

    for (int k=0; k<ans.size(); k++) {
        cout<<"Solution "<<k+1<<endl;
        for (int i=0; i<n*n; i++) {
            cout<<ans[k][i]<<" ";
            if((i+1) % n == 0) cout<<endl;
        }cout<<endl;
    }


    return 0;
}