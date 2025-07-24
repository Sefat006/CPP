#include <bits/stdc++.h>
using namespace std;



int main()
{
    int a,b; cin>> a>>b;

    if( a+1 == b && ( (a<3 && b<3) || ((a>3 && a<6) && (b>3 && b<6)) || ((a>6 && a<9) && (b>6 && b<9)) ) ){
        cout<<"yes"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}