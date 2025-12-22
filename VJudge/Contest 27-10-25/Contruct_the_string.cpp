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
        int n, a, b; 
        cin>>n>>a>>b;

        for (int i=0; i<n; i++) {
            // circular = i% size of the string joto tuku niye circular korbe
            cout<< char('a'+ i%b);
        }cout<<endl;
    }
    


    return 0;
}