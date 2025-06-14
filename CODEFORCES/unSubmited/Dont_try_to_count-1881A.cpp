#include <bits/stdc++.h>
using namespace std;

bool check(const string &s,const string &x){
    if( x.size() < s.size() ){
        return false;
    }else{
        for (int i=0; i<x.size()-s.size()+1; i++) {
            if( x.substr( i, s.size()) == s) return true;
        }
    }

    return false;
}

int main()
{
    int t; cin>> t;

    while (t--)
    {
        int n,m; cin>> n>> m;

        string x, s;
        cin>> x;
        cin>> s;

        if( check(s , x) ){
            cout<< 0 <<endl;
            continue;
        }

        int count = 0;
        bool found = false;
        while( (int)x.length() <= n*m ){
            count++;
            x = x+x;
            if( check(s, x) ){
                cout<< count <<endl;
                found = true;
                break;
            }
        }

        if(!found) cout<<-1<<endl;

        
    }
    

    return 0;
}