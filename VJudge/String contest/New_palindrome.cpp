#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);


bool allSame(string &s, string &half){
    return all_of(half.begin(), half.end(), [&](char c){ 
        return c == half[0]; 
    });
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        string half = s.substr(0, n / 2);
        
        cout << (allSame(s,half) ? "NO" : "YES") << endl;

    }


    return 0;
}