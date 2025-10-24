#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        int ans = -1;
        for (int i=0; i<n-1; i++) {
            if(s[i]=='R' && s[i+1]=='L'){
                ans = 0; break;
            }else if(s[i]=='L' && s[i+1]=='R'){
                ans = i+1;
                break;
            }
        }

        cout<<ans<<endl;
    }


    return 0;
}