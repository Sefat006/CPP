#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>> t;

    while(t--){
        long long n,j,k; cin>> n>> j>> k;

        long long arr[n];
        long long max_val = 0;
        for (int i=0; i<n; i++) {
            cin>> arr[i];
            max_val = max(max_val, arr[i]);
        }

        if( k > 1 || arr[j-1] == max_val){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }

    return 0;
}