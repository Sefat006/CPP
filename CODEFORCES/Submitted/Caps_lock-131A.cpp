#include <bits/stdc++.h>
using namespace std;


/*
Let's consider that a word has been typed with the Caps lock key accidentally switched on, if:

either it only contains uppercase letters;
or all letters except for the first one are uppercase.

In this case we should automatically change the case of all letters. For example, the case of the letters that form words "hELLO", "HTTP", "z" should be changed.
*/

void UpperCase(string &s){
    bool upper = all_of(s.begin(), s.end(), ::isupper);
    bool lower = islower(s[0]) && all_of(s.begin()+1, s.end(), ::isupper);

    if( upper || lower ){
        for( char &ch : s){
            ch = isupper(ch) ? tolower(ch) : toupper(ch);
        }
    }
    cout<< s<< endl;
}

int main()
{
    string s;
    cin>> s;

    UpperCase(s);

    return 0;
}