#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);

bool middle(vector<int> arr){
    int n = arr.size();

    if( n==2){
        return is_sorted(arr.begin(), arr.end());
    }

    int mid = n/2;
    arr.erase(arr.begin()+mid-1);

    if(is_sorted(arr.begin(), arr.end())){
        return true;
    }

    return middle(arr);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }

        if( is_sorted(arr.begin(), arr.end())){
            cout<<"YES\n";
            continue;
        }


        if(middle(arr)){
            cout<<"YES\n";
        }else{cout<<"NO\n";}

    }


    return 0;
}