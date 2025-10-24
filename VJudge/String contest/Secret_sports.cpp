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
        string s;
        cin>>s;

        if(s[n-1] == 'A') cout<<'A'<<endl;
        else cout<<"B\n";
    }


    return 0;
}