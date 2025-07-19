#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n; cin>> n;
    int arr[n];
    for (int i=0; i<n; i++) {
        cin>> arr[i];
    }

    int minimum = abs(arr[0]-arr[n-1]);
    int index1 = 1, index2 = n;
    for (int i=0; i<n-1; i++) {
        int j=i+1;
        int diff = abs(arr[i]-arr[j]);
        // cout<<"diff : "<<diff<<endl;
        if( diff < minimum ){
            minimum = diff;
            index1 = i+1;
            index2 = j+1;
        }
    }

    cout<< index1 <<" "<<index2<<endl;

    return 0;
}