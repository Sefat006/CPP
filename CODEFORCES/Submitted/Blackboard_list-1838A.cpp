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
        vector<int> v(n);
        for (int i=0; i<n; i++) {
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        if(v[0] < 0) cout<< v[0]<<endl;
        else cout<<v[n-1]<<endl;
    }
    


    return 0;
}