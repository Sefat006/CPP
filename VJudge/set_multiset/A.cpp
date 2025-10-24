#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n,m;
    while(cin>>n){
        int m; cin>>m;
        set<int>st;
        int x;
        while (n--)
        {
            cin>>x;
            st.insert(x);
        }

        while (m--)
        {
            cin>>x;
            st.insert(x);
        }

        for(auto x:st){
            cout<<x<<" ";
        }cout<<endl;
        
        
    }

    return 0;
}