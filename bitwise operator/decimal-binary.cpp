#include <bits/stdc++.h>
using namespace std;



int main()
{
    int num = 13;

    // bitset<8/16/32> VARIABLE(num);
    bitset<8> binary(num); // binary is string type

    // it will print 8 bit, it can also print 16, 32 bit
    
    cout<<" decimal : "<<num<< endl;
    cout<<" binary : "<< binary << endl;
    /*
        output :
        Decimal: 13
        Binary: 00001101
    */

    return 0;
}