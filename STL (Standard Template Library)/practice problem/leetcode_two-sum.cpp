#include <bits/stdc++.h>
using namespace std;



int main()
{
    
    int n; cin>> n;
    int target; cin>> target;
    vector <int> v(n);

    for(int i=0; i<n; i++)
    {
        cin>> v[i];
    }

    for ( auto vec : v)
    {
        if( vec[i]+vec[i+1] == target);
    }


    return 0;
}