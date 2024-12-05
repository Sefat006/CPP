

// search an array element

#include <bits/stdc++.h>
using namespace std;

bool linearSearch ( int arr[], int size, int key)
{
    //base case 
    if( size == 0){
        return 0;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingPart = linearSearch( arr+1, size-1, key);
        return remainingPart;
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

    bool ans = linearSearch( arr, n, key);

    if(ans){
        cout<<" the number is present"<<endl;
    }
    else{
        cout<<"the number is not found"<<endl;
    }




    return 0;
}