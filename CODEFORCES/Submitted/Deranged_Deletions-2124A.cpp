#include <bits/stdc++.h>
using namespace std;

void derangement(int arr[], int n){
    for (int i=0; i<n; i++) {
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                cout << "YES"<<"\n2"<<endl;
                cout << arr[i] << " " << arr[j] << "\n";
                return;
        }
    }}
    cout<<"NO\n";
}

int main()
{
    int t; cin>> t;

    while(t--){
        int n; cin>>n;
        int arr[n];
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }

        derangement(arr, n);
    }

    return 0;
}