#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>> t;

    while( t-- ){
        int n,m;
        cin>> n>> m;

        vector <string> s;
        for( int i=0; i<n; i++){
            string x;
            cin>> x;
            s.push_back(x);
        }

        int stringLength = 0;
        int words = 0;
        for(int i=0; i<n; i++){

            int length = s[i].size();
            stringLength = stringLength+length;

            if( stringLength <= m){
                words++;
            }
        }

        cout<< words<<endl;
    }

    return 0;
}