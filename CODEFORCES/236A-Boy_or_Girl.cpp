#include <bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    cin>> s;
    
    // string inserting set
    set<char> character(s.begin(), s.end());
    
    int n = character.size();
    // cout<< n;
    if ( n%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }

    return 0;
}