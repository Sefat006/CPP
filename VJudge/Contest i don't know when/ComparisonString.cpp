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
        int n;cin>>n;
        string s; cin>>s;

        int count = 1;
        for (int i=0; i<n;) {
            count++;
            if( s[i] == s[i+1]){
                i++;
            }else{
                count = 1;
                i++;
            }
        }

        cout<<count+1<<endl;
    }


    return 0;
}