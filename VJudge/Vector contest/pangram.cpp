#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);


string PangramFunction(string &s){
    string str = "pangram", str_not = "not pangram";
    set<char> pangram;
    for( auto c:s){
        if(c == ' '){
            continue;
        }
        c = tolower(c);
        pangram.insert(c);
    }

    if(pangram.size() == 26) return str;
    else{
        return str_not;
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    string s;
    getline(cin, s);
    cout<<PangramFunction(s)<<endl;;


    return 0;
}