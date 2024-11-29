// first and last position of an element in a sorted array
// example: [1,2,3,3,5] 
// find 1st and last position of 3
// return -1 if the element is missing

#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{   
    // s = start; e = end;
    int s = 0, e = n-1;
    int mid = s + ((e-s)/2);
    int ans = -1; // default ans

    while( s <= e){

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
            // if the mid is not the first occurrence then for sure the first occurrence will at the right side of the mid;
            // that's why end = mid -1;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}



int lastOcc(int arr[], int n, int key)
{   
    // s = start; e = end;
    int s = 0, e = n-1;
    int mid = s + ((e-s)/2);
    int ans = -1; // default ans

    while( s <= e){

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
            // if the mid is not the last occurrence then for sure the last occurrence will at the left side of the mid;
            // that's why start = mid + 1;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}




int main(){
    int even[5] = {1,2,3,3,5};
    cout<< "First occurrence of 3 is : "<< firstOcc(even, 5, 3)<<endl;
    cout<< "last occurrence of 3 is : "<< lastOcc(even, 5, 3)<<endl;


    return 0;
}