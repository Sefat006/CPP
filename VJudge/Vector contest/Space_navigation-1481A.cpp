#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);


bool i_dont_know(string &s,char ch,int val, int increment){
    for(char c:s){
        if( c == ch) increment++;
        if(increment == val){
            return true;
            break;
        }
    }

    return false;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while(t--){
        int n,m; cin>> n>>m;
        string s; cin>>s;
        bool ok=false;
        bool okk=false;
        int r=0,l=0,u=0,d=0;


        if( n>0 ){
            ok= i_dont_know(s,'R',n,r);
        }else if( n<0){
            ok= i_dont_know(s,'L', -n, l);
        }else if(n==0) ok=true;


        if( m>0 ){
            okk = i_dont_know(s,'U',m,u);
        }else if( m<0){
            okk = i_dont_know(s,'D', -m,d);
        }else if(m==0) okk=true;

        if(okk && ok)cout<<"YES\n";
        else cout<<"NO\n";
        

    }


    return 0;
}