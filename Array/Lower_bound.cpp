#include <bits/stdc++.h>
using namespace std;

/*
    Array: 1 3 3 5 7 9 
    Target: 4 [absent, if present ans will be 4]
    First element >= 4 is 5 at index 3
*/

int main()
{
    int a[] = { 4, 5, 5, 7, 8, 25 };
    int n = sizeof(a)/sizeof(a[0]);

    sort(a, a+n);
    for (int i=0; i<n; i++) {
        cout<< a[i] << " ";
    }cout<<endl;

    // lower_bound(start, start+sizeofArr, target_value);
    int *ptr = lower_bound(a, a+n, 25);// returns index
    int *idx = lower_bound(a, a+n, 25) - a[0];// returns index

    // returns value;
    cout<< (*ptr)<<endl;
    cout<< (*idx)<<endl;

    return 0;
}