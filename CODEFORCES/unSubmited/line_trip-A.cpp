#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>> t;

    while(t--){
        int n, x; cin>> n>>x;
        vector<int>arr(n);
        arr.push_back(0); // 1st 0,no distance & full tank
        for(int i=0; i<n; i++){
           int d; cin>>d;
           arr.push_back(d); // pushing distances after 0;
        }
        arr.push_back(x);// pushing destination x; last index
        n = arr.size();
        int maximum_distance = 0;

        for(int i=1; i<n; i++){
            if( i == n-1 ){
                maximum_distance = max(maximum_distance, 2*(arr[i] - arr[i-1]));
            }else{
                maximum_distance = max(maximum_distance, (arr[i] - arr[i-1]));
            }
        }

        cout<<maximum_distance<<endl;
    }

    return 0;
}

