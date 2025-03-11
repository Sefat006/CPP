#include <bits/stdc++.h>
using namespace std;

bool palindrome( int x)
{
    int num = x; int reverse = 0; int digit;

    if( num < 0)
        return false;

    while ( num > 0)
    {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }

    return x == reverse;
}

int main()
{
    int x;
    cin >> x;

    if( palindrome(x))
    {
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not";
    }

    return 0;
}