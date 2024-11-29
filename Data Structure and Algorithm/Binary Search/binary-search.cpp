 #include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int value){
    int start = 0;
    int end = size - 1;

    // int mid = (start+end)/2;
    int mid = start + (end-start)/2;

    while(start <= end)
    {
        if((arr[mid])==value)
        {
            return mid;
        }
        
        //if the value/value is less than the mid
        if(value > arr[mid])//go to right(mid+1)
        {
            start = mid + 1;
        }
        //if the value/value is greater than the mid
        else{//go to left(mid-1)
            end = mid - 1;
        }

        // mid = (start+end)/2;
        mid = start + (end-start)/2;
    }
    return 0;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5]= {3,8,11,14,16};

    int evenIndex = binarySearch(even, 6, 20);
    cout<< "index of 12 is "<< evenIndex<<endl;

    int oddIndex = binarySearch(odd, 5, 8);
    cout<< "index of 8 is "<< oddIndex<<endl;


    return 0;
}