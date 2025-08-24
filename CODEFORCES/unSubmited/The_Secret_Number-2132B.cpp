#include <bits/stdc++.h>
using namespace std;

bool allTheSame(long long n){
    long long last = n%10;
    while( n>0){
        if( n%10 != last){
            return false;
        }
        n = n/10;
    }
    return true;
}

int main()
{
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;

        if( !allTheSame(n) ){
            cout<<0<<endl;
        }
    }

    return 0;
}