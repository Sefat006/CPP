#include<iostream>
using namespace std;


int peakIndex(int arr[], int n){
    int s = 0, e = n - 1;
    int mid = s + (e-s)/2;

    while( s < e){
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else {
            e = mid;
        }

        mid = s + (e-s)/2;
    }

    return s;
}

int main(){
    int n;
    cin>> n;

    int arr[n];
    for ( int i = 0; i< n; i++){
        cin>> arr[i];
    }

    int peak = peakIndex(arr, n);
    cout<< "the peak element is in index : "<< peak <<endl;

    return 0;
}