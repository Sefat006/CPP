#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; 
    cin>> t;

    while (t--)
    {
        int a,b;
        cin>> a>>b;
        int minimum = a*b;

        for( int i=a; i<=b; i++){
            int value = (i-a) + (b-i);
            minimum = min(value, minimum);
        }
        cout<<minimum<<endl;
    }
    

    return 0;
}