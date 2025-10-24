#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while(t--){
        int n,c; cin>>n>>c;

        vector<int> v(n);
        set<int> st;
        map<int, int> mp;
        for (int i=0; i<n; i++) {
            cin>>v[i];
            st.insert(v[i]);
        }

        int count=0;

        for(auto x:v) mp[x]++;

        for(auto &x:mp){
            if(x.second < c){
                count += x.second;
            }else count += c;
        }


        if(c==1 || n==1) cout<<st.size()<<endl;
        else cout<<count<<endl;
    }


    return 0;
}