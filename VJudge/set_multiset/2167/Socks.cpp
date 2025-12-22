#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    long long n; cin>>n;

    set<long long> st;
    long long maxi = 0;
    for(long long i=0; i<2*n; i++){
        long long x; cin>>x;
        if( !st.count(x)){
            st.insert(x);
            maxi = max(maxi, (long long)st.size());
        }else{
            st.erase(x);
        }
    }

    cout<<maxi<<endl;


    return 0;
}