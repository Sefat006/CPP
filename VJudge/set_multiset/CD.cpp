#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);


    // code
    long long n,m;
    while ((cin>>n) && (cin>>m))
    {
        if(n==0 && m==0){
            return 0;
        }
        
        set<long long>jack;
        while(n--){
            long long x;
            cin>>x;
            jack.insert(x);
        }

        long long cnt = 0;
        while (m--)
        {
            long long y; cin>>y;
            cnt += jack.count(y);
        }
        cout<<cnt<<endl;
    }
    


    return 0;
}