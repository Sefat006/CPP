#include <bits/stdc++.h>
using namespace std;

/*
    n = row size;
    i = row;
    j = column;
    pattern :

    i=1    4 
    i=2    4 3 
    i=3    4 3 2 
    i=4    4 3 2 1
            
    means we'll just print j reverse to nth;

*/

int main()
{
    int n;
    cin>> n;

    int i = 1;

    while( i <= n)
    {
        int j = 1;

        while( j <= i)
        {
            cout<< i-j+1<<" ";
            j++;
        } cout<<endl;
        i++;
    }

    return 0;
}