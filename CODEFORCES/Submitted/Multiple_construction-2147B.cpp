#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;
    while (t--)
    {
        int x; cin>>x;

        for(int i=x; i>0; i--){
            cout<<i<<" ";
        }
        
        cout<<x<<" ";

        for(int i=1; i<x; i++){
            cout<<i<<" ";
        }cout<<endl;
    }
    


    return 0;
}