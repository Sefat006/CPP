#include <bits/stdc++.h>
using namespace std;



int main()
{

    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    //selection sort
    for( int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++){
            if( arr[j] < arr[i])
            {
                //swaping the minimum index number
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;          
            }
        }
    }

    return 0;
}