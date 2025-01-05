#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>> n;

    int arr[n];
    cout<<"enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }

    // bubble sort
    // skipping 0 element 
    // bcz if all the element is sorted
    // element 0 will automatically sorted
    for( int i=1; i<n; i++){
        // to check if the array is already sorted
        // if false, then the loop won't work(means array is sorted)
        bool swapped = false;
        // for round 1 to n-1
        for( int j=0; j<n-i; j++){
            //process element till (n-i)th index
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            //already sorted;
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}