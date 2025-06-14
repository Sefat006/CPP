#include <bits/stdc++.h>
using namespace std;



int main()
{
    string s; cin>> s;
    long long n = s.length();

    string heavy = "heavy";
    string metal = "metal";

    long long heavy_count = 0, total_count=0;

    for (int i=0; i<n-4; i++) {
        
        if( s.substr( i, 5) == heavy ) heavy_count++;
        else if( s.substr( i, 5 ) == metal ) total_count = total_count+heavy_count;
    }

    cout<< total_count<< endl;

    return 0;
}