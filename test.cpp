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
    while (t--)
    {
        ll n, m, h;
        cin>> n>> m>> h;

        vector<ll> v(n);
        vector<ll> original_v(n);
        vector< pair<ll, ll> > operation(m);

        for(int i=0; i<n; i++){
            cin>>v[i];
            original_v[i] = v[i];
        }

        for(int i=0; i<m; i++){
            cin>> operation[i].first >> operation[i].second;

            int idx = operation[i].first - 1;
            int y = operation[i].second;
            int sum = v[idx] + y;

            if( sum <= h ){
                v[idx] = sum;
            }else{
                v = original_v;
            }
        }

        for (int i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }cout<<"\n";
    }
    

    return 0;
}