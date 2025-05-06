#include <bits/stdc++.h>
using namespace std;

int yogurt(int n, int a,int b)
    {
    int single = n*a;
    int pair = ((n/2)*b)+((n%2)*a);
    /*
        n/2 -> making pair so that per pair = b;
    */

    if ( 2*a <= b){ // if single pair costs less than pair cost
        cout<< single<<endl;
    }else{
        cout<< pair<<endl;
    }
    
    
    return (single, pair);
}

int main(){
    int t;
    cin >> t;
    
    while(t--)
    {
    int n,a,b;
    cin>> n>>a>>b;
    
    yogurt(n,a,b);
    
    }

    return 0;
}