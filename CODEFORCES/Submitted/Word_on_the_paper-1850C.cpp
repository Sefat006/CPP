#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>>t;

    while (t--)
    {
        vector<string> grid(8);
        vector<char> vec;
        for (int i=0; i<8; i++) {
            cin>> grid[i];
        }

        for( string ch : grid){
            for(char c : ch){
                if( c != '.') vec.push_back(c);
            }
        }

        int n = vec.size();

        for (int i=0; i<n; i++) {
            cout<<vec[i];
        }cout<<endl;
    }
    

    return 0;
}