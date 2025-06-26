#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>> t;

    while(t--){
        int n, s;
        cin>> n>> s;

        int arr[n];
        for (int i=0; i<n; i++) {
            cin>> arr[i];
        }

        if( n == 1 && s == arr[0]) {
            cout<<0 << endl;
            continue;
        }
        if( s < arr[0] ){
            cout <<(arr[n-1]-s)<<endl;
            continue;
        }
        if ( s > arr[n-1]){
            cout<< s-arr[0]<<endl;
            continue; 
        }
        

        int lower_diff = min( abs(s-arr[0]), abs(arr[n-1]-s));
        int greater_diff = max( abs(s-arr[0]), abs (arr[n-1]-s) );

        int result = (lower_diff*2) + greater_diff;
        cout<< result<< endl;
    }

    return 0;
}