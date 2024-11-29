// pivot element
// sorted and rotated array
#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s+ (e-s)/2;

    while( s < e){
        // 2 lines; 1st 5,7 & 2nd 0,1,3;
        //basically s = 5 and e = 3;
        // but as 2 lines, so to separate them from each other
        // arr[0] = 5; arr[mid] = 7;
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }else{
            e = mid;
        }

        mid = s+ (e-s)/2;
    }
    return s;
}

int main(){
     int n;

    // Ask the user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    // Input the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Find the pivot
    int pivot = getPivot(arr, n);

    // Output the pivot
    cout << "The pivot index is: " << pivot << endl;


    

    return 0;
}