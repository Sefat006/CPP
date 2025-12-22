#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    vector<int> st1;
    while (n--)
    {
        int x; cin>>x;
        st1.push_back(x);
    }

    int m; cin>>m;
    while (m--)
    {
        int x; cin>>x;
        auto it = find(st1.begin(), st1.end(), x);
        if( it != st1.end()){
            st1.erase(it);
        }
    }

    cout<<st1.size()<<endl;
    for(auto &p : st1){
        cout<<p<<" ";
    }cout<<endl;
    
    


    return 0;
}