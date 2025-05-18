#include <bits/stdc++.h>
using namespace std;

// all the elements are same
bool allSame(vector<int> &arr){
    return all_of(arr.begin(), arr.end(), [&](int x) {
        return x == arr[0];
    });
}

bool doubleZero( vector<int> &arr, int n){
    for(int i=1; i<n; i++){
        if( arr[i] == 0 && arr[i-1] == 0){
            return true;
        }
    }

    return false;
}


int main()
{
    int t; cin>> t;

    while (t--)
    {
        int n;
        cin>> n;

        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }

        if(allSame(arr)){
            cout<<"yes"<<endl;
            continue;;
        }

        if( doubleZero(arr, n) ){
            cout<< "yes"<<endl;
            continue;;
        }else{
            cout<<"NO"<<endl;
        }

    }
    

    return 0;
}