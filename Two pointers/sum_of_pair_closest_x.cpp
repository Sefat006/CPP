#include<bits/stdc++.h>
using namespace std;

/*
find the pair in array whose sum is closest to x


*/


void solve( int arr[], int n, int x){
    int index_1, index_2;
    int difference = INT_MAX;

    for(int i=0, j=n-1; i<j;){

        int sum = arr[i]+arr[j];
        int closest = abs(sum-x);

        if( closest < difference){
            index_1 = i;
            index_2 = j;
            difference = closest;
        }

        if( sum > x ) j--;
        else i++;

        /*
            if i add i++ and j-- on loop, then i don't have to write this
            if( sum > x ) j--;
            else i++;
        */
    }

    cout<<"(" << arr[index_1]<< " "<< arr[index_2]<<") = "<< arr[index_1]+arr[index_2]<<endl;
}


int main()
{
    int n; cin>> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);

    int x; cout<<"\n input x "<<endl;
    cin>>x;

    solve(arr, n , x);


    return 0;
}
