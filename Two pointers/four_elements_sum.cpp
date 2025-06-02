#include <bits/stdc++.h>
using namespace std;

/*
    find four elements that sum to a given value;


*/
void solve(int ar[], int n, int x) {
    int a = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1, l = n - 1; k < l; ) {
                int sum = ar[i] + ar[j] + ar[k] + ar[l];

                if (sum == x) {
                    cout << "[" << ar[i] << "," << ar[j] << "," << ar[k] << "," << ar[l] << "]" << endl;
                    a = 1;
                    k++; l--; // move both pointers
                } else if (sum > x) {
                    l--; // move right pointer left
                } else {
                    k++; // move left pointer right
                }
            }
        }
    }

    if (a == 0)
        cout << "Result is not found" << endl;
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