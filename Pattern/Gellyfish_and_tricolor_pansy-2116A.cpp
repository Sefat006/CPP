#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin>> t;
    
    while( t--)
        {
            int a,b,c,d;
            cin>> a>>b>>c>>d;
            
            if( a < d && c < d || a == 1 && b!=1 && d!=1 || c == 1 && b!=1 && d!=1 ){
                cout<<"Flower"<<endl;
            }else{
            // }else if( c > b && c > d){
                cout<<"Gellyfish"<<endl;
            }
            
        }
    
    return 0;
}
