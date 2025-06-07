#include <bits/stdc++.h>
using namespace std;



int main()
{
    string a,b;
    cin>> a>>b;

    vector<string> result;

    for(int i=0, j=0; i<a.size(), j<b.size(); i++, j++){
        if( a[i] == b[j] )
            result.push_back("0");
        else result.push_back("1");
    }

    for(int i=0; i<a.size(); i++){
        cout<<result[i];
    }cout<<endl;



    return 0;
}