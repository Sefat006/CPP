#include <bits/stdc++.h>
using namespace std;
//const double PI = 2 * acos(0.0);
using ll = long long;

vector<ll> preCal(100001, -1);

ll minCost(ll i, ll n, ll arr[]){
    if(i == n) return 0;

    if( i == n-1){
        return abs(arr[i]-arr[i+1]) + minCost(i+1, n, arr);
    }

    if(preCal[i] != -1) return preCal[i];

    preCal[i] = min(
        abs(arr[i]-arr[i+1]) + minCost(i+1, n, arr),
        abs(arr[i]-arr[i+2]) + minCost(i+2, n, arr)
    );

    return preCal[i];
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    ll arr[n+1];
    for(int i=1; i<=n; i++) cin>>arr[i];
    cout<< minCost(1, n, arr)<<endl;

    return 0;
}