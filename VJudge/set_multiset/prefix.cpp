#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    long long n,k; cin>>n>>k;
    vector<long long> vec(n);

    for (long long i=0; i<n; i++) {
        cin>>vec[i];
    }

    set<long long> st;
    for (long long i=0; i<k; i++) {
        st.insert(vec[i]);
    }

    cout<< *st.begin()<<endl;

    for(long long i=k; i<n; i++){
        st.insert(vec[i]);
        if(vec[i] < *st.begin()){
            st.erase(*st.begin());
            cout<<*st.begin()<<endl;
        }else{
            st.erase(*st.begin());
            cout<<*st.begin()<<endl;
        }
    }


    return 0;
}