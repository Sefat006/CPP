#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    set<int>st;
    while(n--){
        int x; cin>>x;
        st.insert(x);
    }

    cout<< st.size()<<endl;


    return 0;
}