#include <bits/stdc++.h>
using namespace std;


/*
    n = row size;
    i = row;
    j = column;
    pattern :

    i=1    1 2 3 4
    i=2    1 2 3 4
    i=3    1 2 3 4
    i=4    1 2 3 4
            
    means we'll just print j increasing to nth;

*/

int main()
{
    int n;
    cin>> n;

    int i = 1; // row starts with 1;

    while ( i <= n)
    {
        int j = 1; // column starts with 1;

        while( j <= n)
        {
            cout<< j;

            j++;
        }
        // hit enter
        cout<<endl;

        i++;
    } 

    return 0;
}