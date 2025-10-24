#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int q; cin>>q;
    set<int> st;
    while(q--){
        int y, x;
        cin>>y>>x;

        if(y==1){
            st.insert(x);
        }else if(y==2){
            if(st.count(x)){
                st.erase(x);
            }
        }else{
            if( st.count(x)){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
    }


    return 0;
}