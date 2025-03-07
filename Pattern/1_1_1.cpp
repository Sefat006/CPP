#include <bits/stdc++.h>
using namespace std;

/*
    n = row size;
    i = row;
    j = column;
    pattern :

    i=1    1 1 1 1
    i=2    2 2 2 2
    i=3    3 3 3 3
    i=4    4 4 4 4
            
    means we'll just print "i" in column;

*/

int main()
{
    int n;
    cin>> n;

    int i = 1; // row starts from 1;

    while ( i <= n )
    {
        int j = 1; // j starts from i;

        while ( j <= n)
        {
            /* code */
            cout<< i;
            j++;

        } 
        // column nth done?
        // hit enter, new row / next row
        cout<<endl;
        i++;


        
    }
    return 0;
}