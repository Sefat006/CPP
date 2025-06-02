#include <bits/stdc++.h>
using namespace std;

/*
    how many triplet that sum to a given value

    n=1 2 4 6 3 0
    x = 7;
    4 2 1 = 7
    6 1 0 = 7 
    4 3 0 = 7
*/

void solve(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        for( int j=i+1, k=n-1; j<k;)
        {
            int sum = arr[i]+arr[j]+arr[k];
            if(sum==x)
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
            if(sum>x) k--;
            else j++;
        }
    }

}


int main()
{
    int n; cin>> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);

    int x; cout<<"input x : ";
    cin>> x;

    solve(arr, n, x );


    return 0;
}