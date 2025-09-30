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
        int n,a,b; cin>>n>>a>>b;
        int ans=0;
        for (int i=1; i<=n; i++) {
            if( i % 2 == 0){
                ans = ans + a;
            }else{
                ans = ans+(b);
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}