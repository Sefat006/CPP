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

        priority_queue<int> pq;
        while (n--)
        {
            int x; cin>>x;
            pq.push(x);
        }

        while(pq.size()){
            int x = pq.top();
            cout<<x<<" ";
            pq.pop();
            x = x/2;
        
            if(x) pq.push(x);
        }cout<<endl;
        
    }
    

    return 0;
}