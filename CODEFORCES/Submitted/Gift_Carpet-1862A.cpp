#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>> t;

    while(t--){
        int n,m, it=0; cin>>n>>m;
        vector<string> s(n);
        string temp = "vika";
        for (int i=0; i<n; i++) {
            cin>>s[i];
        }

        for(int i=0; i<m; i++){
            for (int j=0; j<n; j++) {
                if(s[j][i] == temp[it]){
                    it++;
                    break;
                }
            }
            if( it == 4 ) break;
        }

        cout<< ( (it == 4 ) ? "YES\n":"NO\n")<<endl;

    }

    return 0;
}