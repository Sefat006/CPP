#include <bits/stdc++.h>
using namespace std;
//const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while(t--){
        int n; cin>>n;

        if( n%2 == 0 ){
            cout<< (n/4)+1<<endl;
        }else{
            cout<<0<<endl;
        }
    }


    return 0;
}