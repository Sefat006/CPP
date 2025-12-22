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
        int n; cin>>n;
        string s; cin>>s;

        if( s[n-1] != 'A' ) {
            cout<<"No\n";
            continue;
        }

        int countQ=0;
        // bool ok = true;
        for (int i=0; i<n; i++) {
            if(s[i] == 'Q') countQ++;
            else countQ--;

        }

        if(countQ <= 0){
            cout<<"YES\n";
        }else cout<<"NO\n";

    }
    


    return 0;
}