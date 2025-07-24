#include <bits/stdc++.h>
using namespace std;



int main()
{
    int col,row; cin>>row>>col;
    int matrix[100][100], transpose[100][100];
    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            cin>> matrix[i][j];
        }
    }

    for (int i=0; i<row; i++) {
        for (int j=0; j<col; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    // transpose[j][i] = matrix[i][j];

        for (int i=0; i<col; i++) {
        for (int j=0; j<row; j++) {
            cout<< transpose[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}