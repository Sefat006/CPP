#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n; cin>> n;

    string s = "I hate ";
    
    if( n==1){
        cout<<s+"it"<<endl;
        return 0;
    }

    for(int i=2; i<=n; i++ ){
        if( i%2 == 0){
            s = s + "that I love ";
        }
        if( i%2 != 0 ){
            s = s+"that I hate ";
        }
    }

    cout<< s+"it"<<endl;
    return 0;
}