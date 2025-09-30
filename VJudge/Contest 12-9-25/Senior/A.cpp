#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        int count=0;
        for (int i=0; i<n; i++) {
            cin>>v[i];
            if(v[i] == -1){
                count++;
            }
        }

        

        if(count == n){
            cout<<count<<endl;
            continue;
        }
        if( (n%2==0) && ((n-count)== n/2 )){
            cout<<0<<endl;
            continue;
        }
        if(count>0){
            cout<<1<<endl;
            
        }else{
            cout<<count<<endl;
        }
    }


    return 0;
}