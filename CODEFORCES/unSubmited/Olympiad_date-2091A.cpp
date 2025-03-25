#include <bits/stdc++.h>
using namespace std;

int olympiad (vector<int> arr){
    int index = 0;
    
    for( int i=0; i<arr.size(); i++){
        if( arr[i] == 0 ){
            index++;

            if(index == 3){
                return (i+1);
            }
        }
    }
    return 0;
}


int main()
{
    int t;
    cin>> t;

    while ( t-- ){
        int n;
        cin>> n;
        vector<int> arr(n);
        for( int i=0; i<n; i++){
            cin>> arr[i];
        }

        cout<<olympiad(arr)<<endl;
    }
    return 0;
}