#include <bits/stdc++.h>
using namespace std;



int main()
{
    string binaryString;
    cin >> binaryString;

    bitset<8> binary(binaryString); // still 8 bits
    unsigned long decimal = binary.to_ulong(); // to_ulong() gives decimal/int

    cout << "Binary: " << binaryString << endl;
    cout << "Decimal: " << decimal << endl;

    return 0;
} 