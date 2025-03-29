#include <bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    cin>> s;
    string t; cin>> t;

    // reverse string
    string str = string(s.rbegin(), s.rend());

    cout<< (str == t ? "YES" : "NO")<<endl;

    return 0;
}