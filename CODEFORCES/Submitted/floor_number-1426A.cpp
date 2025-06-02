#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n,x;
        cin>>n>>x;
        
        int s = 2, ans = 1;

        while( s < n ){
            s = s+x;
            ans++;
        }

        cout<<ans<<endl;
        

    }
    

    return 0;
}