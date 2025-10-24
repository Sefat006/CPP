#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    string s; cin>>s;
    string cpy = s;

    string f = "na";
    string r = "nya";

    int pos = s.find(f);
    bool found = false;

    while( pos != string::npos){
        s.replace(pos, f.size(), r);
        pos = s.find(f, pos+r.size());
        found = true;
    }

    if(found) {
        cout<<s<<endl;
    }else{
        cout<<cpy<<endl;
    }


    return 0;
}