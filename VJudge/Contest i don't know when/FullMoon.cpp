#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    long long n,m,p;
    cin>>n>>m>>p;

    long long ans = m;
    if(n < m){
        cout<<0<<endl;
        return 0;
    }

    long long count = 0;
        while( ans <= n){
            count++;
            ans = ans+p;
        }
    
        cout<<count<<endl;



    return 0;
}