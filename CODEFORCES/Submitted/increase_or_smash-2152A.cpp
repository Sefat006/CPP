#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);

bool allSame(vector<int> &vec){
    return all_of(vec.begin(), vec.end(), [&](int x){
        return x==vec[0];
    });
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> vec(n);
        set<int> st;
        for (int i=0; i<n; i++) {
            cin>>vec[i];
            st.insert(vec[i]);
        }

        int size = st.size();

        if(allSame(vec) || n==1) cout<<1<<endl;
        else{
            cout<< ((size*2)-1) <<endl;
        }

    }


    return 0;
}