#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    set<int> v;
    for (int i=0; i<n; i++) {
        int x; cin>>x;
        v.insert(x);
    }

    int m; cin>>m;
    while (m--)
    {
        int x; cin>>x;
        if(v.count(x)){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    


    return 0;
}