#include<bits/stdc++.h>
using namespace std;


/*
    even + even = even;
    odd + odd = even
    even + odd = odd, X

    so if (n/2) != 0 , means not even, then NO
*/


int main(){
    int t;
    cin>> t;

    while(t--){
        int n;cin>> n;

        if( (n/2)%2 != 0 ) {
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            for (int i=1; i<= n/2; i++) {
                cout<< 2*i <<" ";
            }
            for (int i=1; i<(n/2); i++) {
                cout<< 2*i - 1 <<" ";
            }cout<<(n/2 + n - 1)<<endl;
        }

    }

    return 0;
}
