#include<bits/stdc++.h>
using namespace std;

int main(){
    int x; cin>> x;

    string s = to_string(x);
    string subString = s.substr(s.size()-2 , 2 );

    string k = "K"+subString;

    cout<<k<<endl;


    return 0;
}
