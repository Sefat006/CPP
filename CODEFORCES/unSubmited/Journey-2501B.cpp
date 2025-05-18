#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        int n,a,b,c;
        cin>> n>>a>>b>>c;

        int km=0, day = 0;

        
            if( a <= n && km <= n){
                km = km+a;
                day++;
            }

            if( b <= n && km <= n){
                km = km+ b;
                day++;
            }
            
            if( c <= n && km <= n){
                km = km+ c;
                day++;
            }

            cout<< day<<endl;
    }


    return 0;
}