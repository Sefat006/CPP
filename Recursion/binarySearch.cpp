

// find a element using binary search and recursion

#include <bits/stdc++.h>
using namespace std;

    bool binarySearch( int arr[], int s, int e, int key)
    {
        //base case
        if( s > e){
            return false;
        }

        int mid = s + (e-s)/2;

        //element found
        if( arr[mid] == key )
        {
            return true;
        }

        if( arr[mid] < key)
        {
            return binarySearch(arr, mid+1, e, key);
        }
        else{
            return binarySearch(arr, s, mid-1, key);
        }
    }


int main()
{
    int n;
    cout<<"input size of the array(n) : ";
    cin>> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    int key;
    cout<<"give the number to search in the array : ";
    cin>> key;

    // binarySearch(arr, s=arr[0], e=size(n), key)
    bool binary = binarySearch(arr, 0, n, key);

    if(binary){
        cout<<"present "<<endl;
    }
    else{
        cout<<"absent "<<endl;
    }
    
    return 0;
}