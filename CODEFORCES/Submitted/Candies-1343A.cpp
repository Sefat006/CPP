#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long t; cin>> t;

    while(t--){
        long long n; cin>> n;

        for (int i=2; i<30; i++) {
            int res = pow(2,i);
            int ans = res - 1;

            if( n % ans == 0 ){
                cout<<( n/ans )<<endl;
                break;
            }
        }
    }

    return 0;
}