#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    pair<int, int> p;
    int a,b; cin>>a>>b;
    p = {a,b};

    int sum = (a+b) + (a*b);

    if( sum == 111) cout<<"yes\n";
    else cout<<"no\n";


    return 0;
}