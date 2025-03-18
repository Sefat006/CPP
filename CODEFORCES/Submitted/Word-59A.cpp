#include <bits/stdc++.h>
using namespace std;


/*
    the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.
*/


int main()
{
    string s;
    cin>> s;

    // count uppercase letter and lowercase letter
    int uppercaseCount = count_if(s.begin(), s.end(), ::isupper);
    int lowercaseCount = count_if(s.begin(), s.end(), ::islower);

    if( uppercaseCount > lowercaseCount){
        for( char &ch : s) {
            ch = toupper(ch);
        }
        cout<< s <<endl;
    }
    else{
        for(char &ch : s){
            ch = tolower(ch);
        }
        cout<<s<<endl;
    }


    return 0;
}