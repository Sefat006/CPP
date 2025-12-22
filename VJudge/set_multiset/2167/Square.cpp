#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);


int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);


    // code
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;

        vector<long long> vec(n);
        set<long long> st;

        for(long long i=0; i<n;i++){
            cin>>vec[i];
            st.insert(vec[i]);
        }

        long long x=2;
        bool found = false;
        while(x <= 1018){
            if(!st.count(x)){
                for(long long i=0; i<n; i++){
                    if( gcd(x, vec[i]) == 1 ){
                        cout<<x<<endl;
                        found = true;
                        break;
                    }
                }
            }

            if(found) break;
            else x++;
        }

        if(!found){
            cout<<-1<<endl;
        }

    }



    return 0;
}