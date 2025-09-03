#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> arr(n);
        vector<int>brr(n);
        for (int i=0; i<n; i++) {
            cin>> arr[i];
        }

        if( n == 1 && arr[0]!= 1){
            cout<<1<<endl;
            continue;
        }else if( n==1 && arr[0] == 1){
            cout<<2<<endl;
            continue;
        }

        int var = 1;
        if( arr[0] != var) brr[0]= var;
        else brr[0] = 2;
    
        for (int i=1; i<n; i++) {
            brr[i] = brr[i-1]+1;
            if(brr[i] == arr[i]){
                brr[i] = arr[i]+1;
            }
        }

        

        cout<< brr[n-1]<<endl;


    }


    return 0;
}