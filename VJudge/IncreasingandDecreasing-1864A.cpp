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
        int x,y,n;
        cin>>x>>y>>n;
        if( y <= n || n<3 ){
            cout<<-1<<endl;
            continue;
        }

        vector<int> a(n);
        a[0] = y;
        int div = 1;
        for (int i=1; i<n-1; i++) {
            int var = a[i-1] - div;
            a[i] = var;
            div++;
        }

        a[n-1] = x;

        reverse(a.begin(), a.end());
        if( a[1]-a[0] <= a[2]-a[1]){
            cout<<-1<<endl;
        }else{
            for (int i=0; i<n; i++) {
                cout<<a[i]<< " ";
            }cout<<endl;
        }
    }


    return 0;
}