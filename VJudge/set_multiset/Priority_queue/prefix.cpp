#include <bits/stdc++.h>
using namespace std;
//const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n, k; cin>>n>>k;
    vector<long long> v(n);
    for(int i=0; i<n; i++){ cin>>v[i];}

    priority_queue< long long, vector<long long>, greater<long long>> p;

    for(int i=0; i<k; i++){ p.push(v[i]);}

    cout<< p.top()<<"\n";

    for(int i=k; i<n; i++){
        if(v[i] < p.top()) {
            p.push(v[i]);
            p.pop();
            cout<< p.top()<<endl;
        }else{
            p.pop();
            p.push(v[i]);
            cout<<p.top()<<endl;
        }
    }


    return 0;
}