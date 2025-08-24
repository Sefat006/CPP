#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string a; cin>>a;
        int m; cin>>m;
        string b; cin>>b;
        string c; cin>>c;

        for(char ch: c){
            if( ch == 'D'){
                if( !b.empty()){
                    a.insert(a.end(), b[0]);
                    b.erase(b.begin());
                }
            }else{
                if( !b.empty()){
                    a.insert(a.begin(), b[0]);
                    b.erase(b.begin());
                }
            }
        }


        cout<<a<<endl;
    }

    return 0;
}