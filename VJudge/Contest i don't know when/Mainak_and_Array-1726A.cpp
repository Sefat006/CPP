#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }

        int ans = arr[n-1] - arr[0];

        
        for (int i = 1; i < n; i++) {
            ans = max(ans, arr[i] - arr.front());
            ans = max(ans, arr.back() - arr[i]);
        }

    
        for (int i = 0; i + 1 < n; i++) {
            ans = max(ans, arr[i] - arr[i + 1]);
        }

        cout << ans << endl;
    }

    return 0;
}