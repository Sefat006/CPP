#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>> t;

    while(t--){
        int n, k; cin>> n>> k;

        string s; cin>> s;
        
        map<char, int> mp;
        for(char ch : s){
            mp[ch]++;
        }

        
        int oddCount = 0;
        for(auto it : mp){
            if( it.second % 2 != 0 ) oddCount++;
        }

        if( k < oddCount-1 ) cout<<"NO\n";
        else cout<<"YES\n";

    }

    return 0;
}