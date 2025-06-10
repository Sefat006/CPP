#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>> t;

    while(t-- ){
        int n,x;
        cin>> n>>x;

        vector<int> arr(n);
        for (int i=0; i<n; i++) {
            cin>>arr[i];
        }

        int start=0, end = 0;

        for (int i=0; i<n; i++) {
            if( arr[i] == 1 ){
                start = i;
                break;
            }
        }

        for (int i=n-1; i>=0; i--) {
            if(arr[i] == 1){
                end = i;
                break;
            }
        }

        if( (end - start + 1) <= x ){
            cout<< "YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }




    }

    return 0;
}





