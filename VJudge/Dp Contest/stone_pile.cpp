#include <bits/stdc++.h>
using namespace std;
//const double PI = 2 * acos(0.0);

int stone(int i, int left, int right, int n){
    if( i == n) return abs(left-right);
    int left_return = stone(i+1, left+arr[i], right+arr[i]);
    int right_return = stone(i+1, left, right+stone(i));

    return (left_return, right_return);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    vector<int> arr(n);
    for( int i=0; i<n; i++){
        cin>> arr[i];
    }

    cout<< stone(0,0,0, n);


    return 0;
}