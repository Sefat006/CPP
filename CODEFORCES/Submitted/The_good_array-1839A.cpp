#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while (t--)
    {
        int n,k; cin>>n>>k;

        int ans = (n+k-1)/k;

        if( (n%k > 1) || (n%k==0 && k>1) ) ans++;

        cout<<ans<<endl;
    }
    


    return 0;
}