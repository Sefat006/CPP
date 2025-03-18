#include <bits/stdc++.h>
using namespace std;

/*
    A soldier wants to buy w bananas in the shop. He has to pay k dollars for the first banana, 2k dollars for the second one and so on (in other words, he has to pay i·k dollars for the i-th banana).
    He has n dollars. How many dollars does he have to borrow from his friend soldier to buy w bananas?

*/


int main()
{
    int k,n,w;
    cin>> k>>n >> w;

    int sum = 0;

/*
formula :
    1k + 2k + 3k + .... + wk
    k ( 1 + 2 + 3 + ... + w)
    k [ w(w+1) / 2 ]

*/

// sum of n natural number formula
    sum = k*( (w*(w+1))/2 );
    int need = 0;
    if( sum > n ){
        need = sum - n;
        cout<<need<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}