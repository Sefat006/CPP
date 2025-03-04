#include <bits/stdc++.h>
using namespace std;

// prime = moulik number
// which is not dividable by any number but 0 and the number itself

bool isPrime(int n){
    
    //base case
    if( n <= 1 )
    return false;

    
    for( int i=2; i<n; i++) // 2 to n, shob diye divide korbe
    {
        if( n%i == 0 ) // means divide hoise
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin>> n;

    if(isPrime(n)) // if ( isPrime(n) == true )
    {
        cout<<"It is a Prime Number"<<endl;
    }
    else{
        cout<<"It is not a Prime Number"<<endl;
    }

    return 0;
}