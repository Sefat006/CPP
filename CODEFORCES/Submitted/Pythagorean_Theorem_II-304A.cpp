#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;cin>>n;
    int count = 0;
    for (int a=1; a<=n; a++) {
        for(int b=a; b<=n; b++){
            int sum = a*a + b*b;
            int c = sqrt( sum );
            if( c*c == sum && b<=c && c<=n){
                count++;
            }
        }
    }

    cout<<count<<endl;

    return 0;
}