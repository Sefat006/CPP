#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;

        for (int i=0; i<5; i++) {
            if( a == min({a,b,c})) a++;
            else if(b == min({a,b,c})) b++;
            else c++;
        }

        cout<<a*b*c<<endl;
    }

    return 0;
}