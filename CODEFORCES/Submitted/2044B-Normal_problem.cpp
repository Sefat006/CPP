#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>> t;

    while( t-- )
    {
        string a;
        cin>> a;

        string b;

        b = string(a.rbegin(), a.rend());

        for( char &ch : b){
            if( ch == 'p'){
                ch = 'q';
            }
            else if( ch == 'q'){
                ch = 'p';
            }
        }

        cout<< b << endl;

    }

    return 0;
}