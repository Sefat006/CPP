#include <bits/stdc++.h>
using namespace std;

bool allTheSame(const string &s){
    if(s.empty()) return true;

    return all_of(s.begin(), s.end(), [&](char c) {
        return c==s[0];
    });
}

bool oneZero(string &s){
    for(auto ch: s){
        if( ch == '0'){
            return false;
        }
    }

    return true;
}

int main()
{
    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        if((allTheSame(s) && s[0]=='0') || !oneZero(s)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO\n";
        }
    }
    

    return 0;
}