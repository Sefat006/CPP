#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    string s; cin>>s;

    set<char> st;
    for (int i=0; i<s.size(); i++) {
        if(st.count(s[i])){
            cout<<"NO\n";
            return 0;
        }else{
            st.insert(s[i]);
        }
    }

    cout<<"YES\n";


    return 0;
}