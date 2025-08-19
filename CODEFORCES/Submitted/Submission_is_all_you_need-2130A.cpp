#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        int zero = 0;
        vector<int>arr(n);
        for (int i=0; i<n; i++) {
            cin>>arr[i];
            if(arr[i] == 0) zero++;
        }
        int res = ( accumulate(arr.begin(), arr.end(), 0))+zero;
        cout<<res <<endl;

    }

    return 0;
}