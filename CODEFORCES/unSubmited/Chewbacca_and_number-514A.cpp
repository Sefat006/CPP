#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long x; cin>> x;
    long long a,rev=0, reversedDigit=0, b=x;

    int count = (int)(log10(x) + 1);

    while (b > 0){
        a = b%10;
        b = b/10;
        rev = rev*10 + a;
    }

    long long invert;
    long long result = 0 ;
    while( rev > 0 ){
        reversedDigit = rev%10;
        invert = min( reversedDigit, 9 - reversedDigit);

        
        result = result*10 + invert;
        rev = rev/10;
    }


    cout<< ((result != 0) ? result : x) <<endl;

    return 0;
}