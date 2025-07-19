#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>> t;

    while(t--){
        int k, n; cin>> n>>k;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }

        if( n==1 ){
            cout<<0<<endl;
            continue;
        }

        sort(arr, arr+n);
        int count = 1, ans = 1;
        for (int i=1; i<n; i++) {
            int j=i-1;
            if( abs(arr[i]-arr[j]) > k ) {count = 1;}
            else{ count++;}

            ans = max(ans, count);
        }

        cout<< abs(n-ans) <<endl;
    }

    return 0;
}