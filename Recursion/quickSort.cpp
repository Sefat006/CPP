#include <bits/stdc++.h>
using namespace std;

int partition( int arr[], int s, int e)
{
    // pivot = index[0];
    int pivot = arr[s];

    int count = 0;
    for(int i=s+1; i<=e; i++){
        // if index[0] >= index[1];
        if( arr[i] <= pivot){
            count++;
        }
    }

    int pivotIndex = s + count;
    swap( arr[s], arr[pivotIndex]);

    // left & right part
    int i = s, j = e;
    // s<a | a | a<e
    while( i < pivotIndex && pivotIndex < j){
        while( arr[i] <= pivot){
            i++;
        }
        while( pivot < arr[j]){
            j--;
        }

        if( i < pivotIndex && pivotIndex < j){
            swap( arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}


void quickSort(int arr[], int s, int e){
    // base case
    // for array size is 0[null] or only 1; array is sorted
    if( s >= e){
        return;
    }

    // partition : <a | a | a<
    int p = partition(arr, s, e);
    
    /*    
        arr = [ 2 | 4 | 1 | 6 | 9 ]
lets p = 2; so after swapping with 1, we get:
        arr = [ 1 | 4 | 2 | 6 | 9 ]

now,              p-1 | p | p+1
        arr = [ 1 | 4 | 2 | 6 | 9 ]
    */

   // sort left side
    quickSort(arr, s, p-1);


    // sort right side
    quickSort(arr, p+1, e);
}

int main()
{
    int n = 5;
    int arr[n] = {2,4,1,6,9};
    
    // quickSort(arr, starting_element, ending element)
    quickSort( arr, 0, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}