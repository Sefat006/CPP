#include <bits/stdc++.h>
using namespace std;

/*
output the string formed by concatenating the first letter of each word.
*/

int main()
{
    int t;
    cin>> t; cin.ignore();

    while( t-- ){
        string s;
        getline(cin, s);
        
        stringstream iss(s);
        string word, concatenating_word;

        while( iss >> word ){
            concatenating_word += word[0];
        }

        cout<< concatenating_word<<endl;
    }

    return 0;
}