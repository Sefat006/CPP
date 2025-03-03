#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>> n;
    

    int even = 0, odd = 0, positive = 0, negative =0;
    for( int i=0; i<n; i++)
    {
        int x;
        cin>> x;

        if( x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if( x > 0 )
        {
            positive++;
        }
        else if( x<0)
        {
            negative++;
        }
    }

    
    // for( int i=0; i<n; i++)
    // {
        
    // }

    cout<< "Even : "<<even<<endl;
    cout<< "odd : "<<odd<<endl;
    cout<< "positive : "<<positive<<endl;
    cout<< "negative : "<<negative<<endl;
    return 0;
}