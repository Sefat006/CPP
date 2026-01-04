#include <bits/stdc++.h>
using namespace std;
//const double PI = 2 * acos(0.0);

/*
to find the minimum sum of "difference array" : we have to check if arr[0] & arr[n-1] have the same value. if they have same value then, make arr[0] = arr[n-1] = 0;
if they don't have the same value, then make arr[0] = arr[n-1] || arr[n-1] = arr[0];

if there is any empty array at the middle, then make them 0;
then for minimum sum = abs(arr[0]-arr[n-1]);
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        vector<long long> arr(n);
        for(long long i=0; i<n; i++) cin>>arr[i];

        if(arr[0] == -1 && arr[n-1] == -1){
            arr[0] = 0;
            arr[n-1] = 0;
        }

        if( arr[0] == -1 && arr[n-1] != -1){
            arr[0] = arr[n-1];
        }

        if( arr[0] != -1 && arr[n-1] == -1){
            arr[n-1] = arr[0];
        }

        for( long long i=1; i<n-1; i++){
            if(arr[i] == -1 ){
                arr[i] = 0;
            }
        }

        long long ans = abs(arr[0]-arr[n-1]);

        cout<<ans<<endl;
        for(long long i=0; i<n; i++){
            cout<<arr[i]<< " ";
        }cout<<endl;
    }


    return 0;
}