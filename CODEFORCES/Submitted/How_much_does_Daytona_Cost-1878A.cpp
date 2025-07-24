#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;

    while(t--){
        int n,k; cin>>n>>k;
        int arr[n];
        bool yes = false;
        for (int i=0; i<n; i++) {
            cin>>arr[i];
            if( arr[i] == k ) yes = true;
        }

        cout<< ((yes) ? "YES":"NO")<<endl;
    }

    return 0;
}