#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    long long n,m;
    cin>>n>>m;
    set<long long> row, col;
    while (m--)
    {
        long long x,y;
        cin>>x>>y;
        row.insert(x);
        col.insert(y);

        long long rowSize = n - (row.size());
        long long colSize = n - (col.size());
        cout<< rowSize*colSize<<" ";

    }cout<<endl;
    


    return 0;
}