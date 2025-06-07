#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>> t;

    while (t--)
    {
        int x;
        vector<int> crystal(3, 0);

        if( x == 1 ){
            cout<<3<<endl;
        }else if( x >= 2 ){
            for(int i=0; i<3; i++){
            crystal.push_back(i+1);
            }
        }

        
    }
    

    return 0;
}