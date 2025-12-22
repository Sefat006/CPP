#include <bits/stdc++.h>
using namespace std;
//const double PI = 2 * acos(0.0);
using ll = long long;

vector<ll> dp(100001, -1);


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    ll arr[n+1];
    for(int i=1; i<=n; i++) cin>>arr[i];

    dp[1] = 0; // no cost at array 1
    dp[2] = abs(arr[1] - arr[2]);

    for (int i=3; i<=n; i++) {
        ll cost1 = abs(arr[i]-arr[i-1] + dp[i-1]);
        ll cost2 = abs(arr[i]-arr[i-2] + dp[i-2]);

        dp[i] = min(cost1, cost2);
    }

    cout<<dp[n]<<endl;
    

    return 0;
}