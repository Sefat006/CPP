#include <bits/stdc++.h>
using namespace std;

/*
    *Right now, Limak and Bob weigh a and b respectively. It's guaranteed that Limak's weight is smaller than or equal to his brother's weight.
    *Limak eats a lot and his weight is tripled after every year, while Bob's weight is doubled after every year.
    *After how many full years will Limak become strictly larger (strictly heavier) than Bob?
*/

int main()
{
    int a,b;
    cin>> a>> b;
    int count = 0;
    while( a < b) {
        a = a*3;
        b = b*2;
        count++;
    }

    if( a == b ){
        cout<< count+1 <<endl;
    }
    else
    {cout<< count<<endl;}

    return 0;
}