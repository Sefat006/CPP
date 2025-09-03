#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    long long q; cin>>q;
    while( q-- ){
        long long n; cin>>n;

        if( n==1){
            cout<<0<<endl;
            continue;
        }

        long long count = 0;

        while(n>1){
            if(n%2 == 0){
                n=n/2;
                count++;
            }else if( n%3 == 0){
                n = (2*n)/3;
                count++;
            }else if(n%5 == 0){
                n = (4*n)/5;
                count++;
            }else if(n%2 != 0 && n%3 != 0 && n%5 != 0 && (n!=1 || n>1)){
                count = -1;
                break;
            }
        }

        cout<<count<<endl;
    }


    return 0;
}