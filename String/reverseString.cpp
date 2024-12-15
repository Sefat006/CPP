#include <bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    cout<< "give the string : ";
    cin>> s;

    // reverse string
    string b = s;
    b = string( b.rbegin(), b.rend());
    //reverse( b.begin(), s.end());

    cout<<"the reverse string is "<< b;

    return 0;
}