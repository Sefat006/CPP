#include <bits/stdc++.h>
using namespace std;


/*
Let's consider that a word has been typed with the Caps lock key accidentally switched on, if:

either it only contains uppercase letters;
or all letters except for the first one are uppercase.

In this case we should automatically change the case of all letters. For example, the case of the letters that form words "hELLO", "HTTP", "z" should be changed.
*/

bool UpperCase(string s, int n){
    int upper = 0, lower = 0;

    // check full string
    upper = count_if(s.begin(), s.end(), ::isupper );

    // check from index 1 to last
    lower = count_if(s.begin()+1, s.end(), ::islower);

    // CAPS LOCK conditions
    if( upper == n || (isupper(s[1]) && lower == 0) ){
        return false;
    }
    return true;
}

int main()
{
    string s;
    cin>> s;
    int n = s.size();

    if( n == 1){
        s[0] = isupper(s[0]) ? tolower(s[0]) : toupper(s[0]);
        cout<<s<<endl;
    }
    else if( s == "OOPS" || s == "oops"){
        cout<<"oops"<<endl;
    }
    else if( ! UpperCase(s, n) ){
        // convert 0th index to uppercase
        s[0] = toupper(s[0]);

        // convert i=1 to end() to lowercase;
        for( int i=1; i<n; i++){
            s[i] = tolower(s[i]);
        }
        cout<< s << endl;
    }else{
        cout<< s << endl;
    }

    

    return 0;
}