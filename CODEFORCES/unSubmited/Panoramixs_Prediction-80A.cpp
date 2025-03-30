#include <bits/stdc++.h>
using namespace std;

// find the next of the given prime number 
/*
1. Find if m is prime number;( isPrime(m) == true )
    if yes GOTO step-2, else print "NO";
2. Find if any number between n and m is prime number;
    ( checkPrime(n, m) == true ) Print "NO", else "YES"
*/

bool isPrime(int m){

    if( m <= 2)
    return true;

    for( int i= 2; i<m; i++){
        if( m%i == 0){
            return false;
        }
    }
    // return true if primeNumber; false otherwise;
    return true; 
}

bool checkPrime(int n, int m){
    for(int i=n+1; i<m; i++){
        if(isPrime(i)){
            return true;
            // there's prime number between n to m;
        }
    }

    return false;
}

int main()
{
    int n,m;
    cin>> n>> m;


    if(isPrime(m)){
        if( !checkPrime(n, m)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}