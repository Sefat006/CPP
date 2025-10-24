#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);


    // code
    int n; cin>>n;
    vector<string> s(n);

    for (int i=0; i<n; i++) {
        cin>>s[i];
    }

    for (int i=n-1; i>=0; i--) {
        cout<<s[i]<<endl;
        
    }


    return 0;
}