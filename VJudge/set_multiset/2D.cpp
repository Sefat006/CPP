#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n; scanf("%d", &n);
        set<pair<int,int>> st;
        while(n--){
            int x,y;
            scanf("%d%d", &x, &y);
            st.insert({x,y});
        }

        for(auto x:st){
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
    


    return 0;
}