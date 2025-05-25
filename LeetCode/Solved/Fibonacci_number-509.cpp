#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    int sum ;
    if(n==0){
        return 0;
    }
    if( n==1 ){
        return 1;
    }
    
    sum = fib(n-1)+fib(n-2);
    
    return sum;
}

int main()
{
    int n;
    cin>> n;
    int sum = fib(n);
    cout<< sum <<endl;

    return 0;
}