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
        int n; cin>>n;

        if(n%3 == 0) cout<<0<<endl;
        else{
            int x=n;
            while( x%3 != 0 ){
                x++;
            }

            cout<< x-n <<endl;
        }
    }
    


    return 0;
}