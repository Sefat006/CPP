#include <bits/stdc++.h>
using namespace std;

void triple(int a[], int n)
{
    unordered_map<int , int> count;

    for( int i=0; i<n; i++)
    {
        // counts how many time a number present in an array
        // arr[i] = key; count[arr[i]] = value of key;
        count[a[i]]++;

        if( count[a[i]] == 3){
            cout<<a[i]<<endl;
            return;
        }
    }

    cout<< -1 <<endl;

}


int main()
{
    int t;
    cin>> t;

    while( t-- )
    {
        int n;
        cin>> n;

        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>> a[i];
        }
        triple(a, n);
    }    
    
    return 0;
}