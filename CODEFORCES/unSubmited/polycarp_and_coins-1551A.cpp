#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        int n; cin>> n;

        int x = n/3;
        // int c2 = x*2;
        // int c1 = n-c2;

        if(n%3 == 0){
            cout<< x<<" "<<x<<endl;
        }else if( n%3 == 1){
            cout<< x+1 << " "<< x<<endl;
        }else{
             cout<< x<< " "<< x+1 <<endl;
        }
    }
    

    return 0;
}