#include <bits/stdc++.h>
using namespace std;

/*
MEX of a set is the smallest non-negative integer that is not present in the set.
Example:
Array = {0, 1, 2, 4} → MEX = 3
Array = {1, 2, 3} → MEX = 0
Array = {0, 1, 2, 3, 4, 20, 25, ...} → MEX = 5 (smallest absent [serially])
*/


int findMex(unordered_set<int> &arr, int n){
    int mex = 0;
    while(arr.count(mex)){
        mex++;
    }

    return mex;
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    unordered_set<int> arr(n);
    cout<<"\n enter array elements : ";
    while(n--){
        int x; cin>> x;
        arr.insert(x);
    }

    int result = findMex(arr, n);
    cout<<"\n mex is : "<<result<<endl;

    return 0;
}