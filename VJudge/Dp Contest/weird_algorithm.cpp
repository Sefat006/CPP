#include <bits/stdc++.h>
using namespace std;
//const double PI = 2 * acos(0.0);

void weird_algo(long long n){
    cout<< n <<" ";
    if( n == 1){ 
        return;
    }

    if(n%2 == 0) weird_algo(n/2);
    else weird_algo((n*3)+1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    long long n; cin>>n;

    weird_algo(n);

    return 0;
}