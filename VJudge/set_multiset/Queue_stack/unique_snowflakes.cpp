#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);


    // code
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        queue<int>q;
        set<int> s;
        int ans = 0;
        for(int i=0; i<n; i++){
            int x; cin>>x;
            while (s.count(x))
            {
                s.erase(q.front());
                q.pop();
            }
            s.insert(x);
            q.push(x);
            ans = max(ans, (int)q.size());
        }
        cout<<ans<<endl;
        
    }


    return 0;
}