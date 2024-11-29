// pivot array
// search in rotated sorted array

#include<iostream>
#include<vector>
using namespace std;

int getPivot(vector<int> &arr, int n){
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

int binarySearch(vector<int> &arr, int s,int e, int key){

    // int mid = (start+end)/2;
    int mid = s + (e-s)/2;

    while(s <= e)
    {
        if((arr[mid])==key)
        {
            return mid;
        }
        
        //if the value/value is less than the mid
        if(key > arr[mid])//go to right(mid+1)
        {
            s = mid + 1;
        }
        //if the value/value is greater than the mid
        else{//go to left(mid-1)
            e = mid - 1;
        }

        // mid = (start+end)/2;
        mid = s + (e-s)/2;
    }
    return -1;
}

int findPosition(vector<int> &arr, int n, int k)
{
    
    int pivot = getPivot(arr, n);
    if(k >= arr[pivot] && k<= arr[n-1])
    {
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot-1, k);
    }
    
}

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the rotated sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> key;

    int position = findPosition(arr, n, key);
    if (position != -1) {
        cout << "Element found at index: " << position << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}