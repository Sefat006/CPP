#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        int n, a;
        cin>> n;
        
        a = n%10;
        n = n/10;

        cout<< a+n<<endl;
    }
    

    return 0;
}