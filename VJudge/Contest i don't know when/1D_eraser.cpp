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
        int n,k; cin>>n>>k;
        string s; cin>>s;

        int count = 0;
        // int mini = INT_MAX;
        for(int i=0; i<n;){
            if( s[i] == 'B'){
                count++;
                i = i+k;
            }else i++;
        }

        cout<< count <<endl;
    }

    return 0;
}