#include <bits/stdc++.h>
using namespace std;

/*
    You are given three integers x,y and n. Your task is to find the maximum integer k such that 0≤k≤n that k mod x = y;
    In other words, with given x,y and n you need to find the maximum possible integer from 0 to n that has the remainder y modulo x.

    k mod x = y;
    7 mod 3 = 1 
    3 | 7 | 2
        6           so, 7 = 3*(2) + 1;
    ---------           k = x*(q) + y; where q = some number;
        1

    now,
    k <= n;
    x*(q) + y <= n;
    x*(q) <= n-y;
   so, q = (n-y) / x; 
   then we'll put value of q on (k = x*q + y);

*/


int main()
{
    long long t; cin>> t;

    while (t--)
    {
        long long x,y,n; 
        cin>> x>> y>> n;

        // find q
        long long q = (n-y) / x;
        // put q in k = x*q + y;
        long long k = (x*q) + y;

        cout<< k << endl;
    }
    return 0;
}