#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;

        int n=s.size();
        map<char,int> frq;

        if( n<=3) {
            cout<<"NO\n";
            continue;
        }

        for (int i=0; i<n; i++) {
            frq[s[i]]++;
        }

        int distinct = frq.size();
        // cout<<distinct<<endl;

        if(distinct == 1){
            cout<<"NO\n";
            continue;
        }

        if(n%2 == 0){
            if(distinct == n/2) cout<<"YES\n";
        }else{
            if( (distinct-1) == int(n/2)){
            cout<<"YES\n";
            }else if(distinct == 2){
                for (int i=0; i<distinct; i++) {
                    if()
                }
            }
            else{
                cout<<"NO\n";
            }
        }
        
        
    }


    return 0;
}