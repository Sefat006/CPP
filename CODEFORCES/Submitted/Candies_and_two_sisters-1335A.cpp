#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        int n;
        cin>> n;
        
        int ans;
        if( n%2 != 0){ // odd
            ans = int (n/2);
        }
        else if( n%2 == 0){ // even
            ans = (n/2) - 1;
        }

        cout<<ans<<endl;
    } 
    

    return 0;
}