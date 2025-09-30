#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);

int sum(vector<int> &x){
    return accumulate(x.begin(), x.end(), 0);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    vector<int> arr(n);
    vector<int> brr;
    vector<int> crr;
    for (int i=0; i<n; i++) {
        cin>>arr[i];
        if( arr[i]<0){
            crr.push_back(arr[i]);
        }else brr.push_back(arr[i]);
    }

    int B = sum(brr);
    int C = sum(crr);
    int minus = B-C;

    cout<<minus<<endl;


    return 0;
}