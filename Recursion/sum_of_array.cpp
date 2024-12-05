

// sum of array elements

#include <bits/stdc++.h>
using namespace std;

int getSum( int arr[], int size){

    // base case 
    if( size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0]; //array's 1st element;
    }

    int remaining_elemet_sum = getSum( arr+1, size-1);
    int sum = arr[0] + remaining_elemet_sum;
    return sum;
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

    int sum = getSum(arr, n);

    cout<<"the sum of the array element is : "<< sum<< endl;



    return 0;
}