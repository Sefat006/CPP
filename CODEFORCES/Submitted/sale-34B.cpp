#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,m; cin>> n>>m;

    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }

    sort(arr.begin(), arr.end());
    // for(int i=0; i<n; i++){
    //     cout<< arr[i]<<" ";
    // }cout<<endl;
    int count = 0;
    for(int i=0; i<m; i++){
        // cout<<count<<" + "<< arr[i];
        // count = min(count, count+=arr[i]);
        if( arr[i] <= 0 ){
            count = count + arr[i];
            // cout<<" = "<<count<<endl;
        }else{
            break;
        }
        
    }

    cout<<count*(-1)<<endl;
    


    return 0;
}