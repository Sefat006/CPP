#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);


void doooooooooooooooooooo(string &s, int n){
    bool lower=false, upper=false, number=false, ch = false;
    string special = "!@#$%^&*()-+";

    for( auto c:s){
        if(islower((unsigned char)c)) lower = true;
        else if(isupper((unsigned char)c)) upper = true;
        else if(isdigit((unsigned char)c)) number = true;
        else if(special.find(c) != string::npos) ch = true;
    }

    int missing = 0;
    if(lower == false){ missing++;cout<<"lower is missing"<< missing<<endl;}
    if(upper == false) { missing++;cout<<"upper is missing"<< missing<<endl;}
    if(number == false) { missing++;cout<<"number is missing"<< missing<<endl;}
    if(ch == false) { missing++;cout<<"special char is missing"<< missing<<endl;}

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