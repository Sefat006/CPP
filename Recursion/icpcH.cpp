#include <bits/stdc++.h>
using namespace std;
//const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    long long t; cin>>t;
    while(t--){
        long long n,m; cin>>n>>m;
        vector<long long> arr(n);
        unordered_set<long long> st;
        for(long long i=0; i<n; i++){
            cin>>arr[i];
            st.insert(arr[i]);
        }

        long long count = 0;
        vector< vector<long long> > vec(m, vector<long long> (m));
        for (long long i=0; i<m; i++) {
            for(long long j=0; j<3; j++){
                cin>>vec[i][j];

                if( st.count(vec[i][j])) count++;
            }
        }

        cout<< count+1<<endl;
    }


    return 0;
}