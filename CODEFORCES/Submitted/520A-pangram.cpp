#include <bits/stdc++.h>
using namespace std;


/*
    A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.
    You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.
*/


int main()
{
    int n;
    cin>> n;

    string s;
    cin>> s;
    set <char> pangram;

    for ( char c : s)
    {
        c = tolower(c);
        pangram.insert(c);
    }

    if( pangram.size() == 26)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}