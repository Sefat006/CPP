#include <bits/stdc++.h>
using namespace std;


/*
    if the last digit of the number is non-zero, she decreases the number by one;
if the last digit of the number is zero, she divides the number by 10 (i.e. removes the last digit).

*/


int main()
{
    int n,k;
    cin>> n>> k;

    while ( k-- ){
        int mod = n%10;

        if( mod != 0 ){
            n = n-1;
        }
        else{
            n = n/10;
        }
    }

    cout<< n <<endl;
    return 0;
}