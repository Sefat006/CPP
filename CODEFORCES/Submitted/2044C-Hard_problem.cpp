#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>>t;

    while( t-- )
    {
        long long int m,a,b,c;
        cin >> m >> a >> b >> c;

        long long int count = 0;
        if(a <= m)
            count += a;
        else
            count += m;

        if(b <= m)
            count += b;
        else
            count += m;

        long long int space = (m*2) - count;
        if(space >= c)
            count += c;
        else
            count += space;

        cout << count << endl;
    }

    return 0;
}