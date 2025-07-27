#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>>t;

    while(t--) {
        int n,m; cin>>n>>m;
        char arr[n][m];
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                cin>>arr[i][j];
            }
        }

        int remR = 0, remD = 0;

        for (int i=0; i<n; i++) {
            if(arr[i][m-1] == 'R') remR++;
        }

        for (int j=0; j<m; j++) {
            if( arr[n-1][j] == 'D') remD++;
        }

        cout<< remR+remD <<endl;

    }

    return 0;
}