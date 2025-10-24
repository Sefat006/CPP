#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);


void doooooooooooooooooooo(string &s, int n){
    int lower=1, upper=1, number=1, ch = 1;
    string special = "!@#$%^&*()-+";

    for( auto c:s){
        if(islower(c)) lower = 0;
        if(isupper(c)) upper = 0;
        if(isdigit(c)) number = 0;
        if(special.find(c) != string::npos) ch = 0;
    }

    int ans = lower+upper+number+ch;

    ans = max(ans, 6-n);
    cout<<ans<<endl;

}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    string s; cin>>s;

    doooooooooooooooooooo(s,n);


    return 0;
}