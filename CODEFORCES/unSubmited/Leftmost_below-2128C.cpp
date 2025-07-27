#include <bits/stdc++.h>
using namespace std;

bool descending(long long n){
    if( n==1 || n%2 == 0 ){ return true;}

    return false;
}

int main()
{
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long> arr(n);
        for (long long i=0; i<n; i++) {
            cin>>arr[i];
        }

        if(descending(n)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }

    return 0;
}