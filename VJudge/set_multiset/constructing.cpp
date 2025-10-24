#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;
    map<int, int> loc, des;
    while(t--){
        int n; cin>>n;
        multiset< pair<int, int>> st;
        for(int i=0; i<n; i++){
            int x,y;
            cin>>x>>y;

            auto it = st.find({y,x});

            if(it == st.end()) st.insert({x,y});
            else st.erase(it);
        }

        if(st.empty()) cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}