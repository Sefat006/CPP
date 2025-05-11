#include <bits/stdc++.h>
using namespace std;

/*
    n = row size;
    i = row;
    j = column;
    pattern :

    i=1    4 3 2 1
    i=2    4 3 2 1
    i=3    4 3 2 1
    i=4    4 3 2 1
            
    means we'll just print j reverse to nth;

*/

int main()
{
    int n;
    cin>> n;

    int i = n;

    while( i >= 1)
    {
        int j = n;

        while( j >= 1)
        {
            cout<< j;
            j--;
        } cout<<endl;
        i--;
    }

    return 0;
}