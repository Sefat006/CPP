#include <bits/stdc++.h>
using namespace std;

void insertion(int arr[], int &n, int capacity, int element, int position)
{
    if ( n >= capacity){
        cout<<"array is full"<<endl;
        return;
    }
    if( position < 0 || position > n){
        cout<< "invalid position"<<endl;
        return;
    }

    for(int i=n; i>position; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = element;
    n++;

}

void deletion(int arr[], int &n, int position){
    if( n <= 0){
        cout<<"array is empty, nothing to delete"<<endl;
        return;
    }
    if( position > n || position < 0){
        cout<<"invalid position"<<endl;
        return;
    }

    for( int i=position; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;

}

void display(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main()
{
    int capacity = 100;//maximum capacity of array
    int arr[capacity];
    int n=5; //current number of elements in array

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    display(arr, n);

    cout<<"inserting 25 in index 2: ";
    insertion(arr, n, 100, 25, 2);
    display(arr, n);

    cout<<"deleting element at position 4: ";
    deletion(arr, n, 4);
    display(arr, n);

    return 0;
}