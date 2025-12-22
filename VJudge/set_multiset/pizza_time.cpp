#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t;cin>>t;

    while(t--){
        int n; cin>>n;
        int ans = 0;

        while(n>2){
            ans =+ n;
            n = n/3;
        }

        cout<<ans<<endl;
    }


    return 0;
}