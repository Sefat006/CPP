// if the given array is sorted

#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size)
{
    //base case
    if( size == 0 || size == 1)
    {
        return true;
    }

    if( arr[0] > arr[1])
    {
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }
}

int main()
{
    int n; cin>> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    bool ans = isSorted(arr, n);

    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<< endl;
    }
    return 0;
}