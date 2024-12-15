#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int m,a,b,c;
        cin >> m >> a >> b >> c;

        long long int cnt=0;
        if(a <= m)
            cnt+=a;
        else
            cnt+=m;

        if(b <= m)
            cnt+=b;
        else
            cnt+=m;

        long long int space = (m*2)-cnt;
        if(space >= c)
            cnt+=c;
        else
            cnt+=space;

        cout << cnt << endl;
    }
}