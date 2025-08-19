#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t; cin>>t;
    while(t--){
        long long l1,b1,l2,b2,l3,b3;
        cin>>l1>>b1>>l2>>b2>>l3>>b3;

        long long area1, area2, area3;
        area1 = l1*b1;
        area2 = l2*b2;
        area3 = l3*b3;
        long long sum = area1+area2+area3;
        int sqart = (int)(sqrt(sum));

        if( (sum*sum) != sqart ){
            cout<<"NO\n";
        }

        if( l1 == l2 && l2==l3 ){
            if( b1+b2+b3 == l1 ){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else if( b1 == b2 && b2==b3 ){
            if( l1+l2+l3 == b1 ){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else if( (l1+l2 == l1+l3) && (l1+l3 == b1) && (b1 = b2+b3) ){
            cout<<"YES\n";
        }else if( b1+b2 == b1+b3 && b1+b3 == l1 && l1 == l2+l3){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
            
    }

    return 0;
}