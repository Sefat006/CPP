#include <bits/stdc++.h>
using namespace std;

/*
    n = row size;
    i = row;
    j = column;
    pattern :

    i=1    1 2 3 4
    i=2    5 6 7 8 
    i=3    9 10 11 12
    i=4    13 14 15 16
            
    means we'll just print j reverse to nth;

*/



int main()
{
    int n;
    cin>> n;

    int i = 1;
    int count = 1;
    while( i <= n)
    {
        int j = 1;
        while ( j <= n)
        {
            /* code */
            cout<<count<<" ";
            count++;
            j++;
        }cout<<endl;
        i++;
        
    }

    return 0;
}