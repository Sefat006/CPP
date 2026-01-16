#include <bits/stdc++.h>
using namespace std;
//const double PI = 2 * acos(0.0);
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    ll t; cin>>t;
    while(t--){
        ll a,b,n; cin>> a>> b>> n;

        if( a == b ) {
            cout<<1<<endl;
            continue;
        }

        if((n*b) <= a){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
        
    }


    return 0;
}