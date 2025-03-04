#include <bits/stdc++.h>
using namespace std;

/*
    Nastya owns too many arrays now, so she wants to delete the least important of them. However, she discovered that this array is magic! Nastya now knows that the array has the following properties:

    In one second we can add an arbitrary (possibly negative) integer to all elements of the array that are not equal to zero.
    When all elements of the array become equal to zero, the array explodes.
    Nastya is always busy, so she wants to explode the array as fast as possible. Compute the minimum time in which the array can be exploded.
*/

int main()
{
    int n;
    cin>> n;
    set < int > arr;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>> x;
        if( x != 0)
        {
            arr.insert(x);
        }
    }

    cout<< arr.size()<<endl;



    return 0;
}