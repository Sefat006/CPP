#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>>t;

    while(t--){
        int n;cin>>n;
        int a,b;
        int maximum = INT_MIN;
        int index;
        for (int i=0; i<n; i++) {
            cin>>a>>b;
            if( a>10) continue;
            else{
                if( b > maximum ){
                    maximum = b;
                    index = i+1;
                }
            }
        }

        cout<<index<<endl;
    }

    return 0;
}