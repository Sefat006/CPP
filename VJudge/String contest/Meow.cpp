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
        string s;
        cin>> s;

        transform(s.begin(), s.end(), s.begin(), ::tolower);
        bool okey = true;

        int i=0;

        if(s[i] != 'm') okey = false;
        while(i<n && s[i]=='m') i++;

        if(i == n || s[i] != 'e') okey = false;
        while(i<n && s[i]=='e') i++;

        if(i == n || s[i] != 'o') okey = false;
        while(i<n && s[i]=='o') i++;

        if(i == n || s[i] != 'w') okey = false;
        while(i<n && s[i]=='w') i++;

        if( okey && i==n ) {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
    


    return 0;
}