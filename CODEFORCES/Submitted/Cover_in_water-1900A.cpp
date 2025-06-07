#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>> n;

        string s; cin>>s;

        bool cell = false;
        int count = 0;

        for( int i=0; i<n; i++){
            if( s[i]=='.' && i-1 >= 0 && s[i-1]=='.' && i+1 < n && s[i+1]=='.' ){
                cell = true;
                break;
            }

            if( s[i]=='.' ) count++;
        }

        cout<< ((cell) ? 2 : count)<<endl;
    }

    return 0;
}