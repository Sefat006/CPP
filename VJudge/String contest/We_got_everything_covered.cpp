#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while (t--)
    {
        int n,k;cin>>n>>k;

        for (int i=0; i<n; i++) {
            for (char c='a'; c<k+'a'; c++) {
                cout<<c;
            }
        }cout<<endl;
    }
    


    return 0;
}