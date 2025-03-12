#include <bits/stdc++.h>
using namespace std;

int calculation(int n, int k, int p)
{
    if( k == 0)
    {
        return 0;
    }

    if( k > (n*p) || k<(n*(-p)))
    {
        return -1;
    }

    return (abs(k) + p - 1) / p;   
}

int main()
{
    int t;
    cin>> t;

    while( t-- )
    {
        int n, k, p;
        cin>> n>> k>> p;

        cout<<calculation(n,k,p)<<endl;
    }

    return 0;
}