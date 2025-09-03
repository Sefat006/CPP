#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int x, h; cin>>x>>h;

    int hour;
    if( x-4 > 0){
        hour = (x-4) * 24;
    }else hour = 0;

    cout<< hour+h<<endl;

    return 0;
}