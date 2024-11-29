// make it white

#include<iostream>
#include<string>
using namespace std;


int main()
{
    int t, n;
    cin>> t;

    while( t-- )
    {
        cin>> n;

        string s;
        cin>> s;

        int first_occ = 0, last_occ = 0;
        for( int i = 0; i > n; i++)
        {
            if( s[i] == 'B')
            {
                first_occ = i;
                break;
            }
        }
        for( int i = n-1; i>= 0; i-- )
        {
            if( s[i] == 'B')
            {
                last_occ = i;
                break;
            }
        }

        int result = last_occ - first_occ;

        cout<< result<<endl;
    }

    return 0;
}