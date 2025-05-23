#include <bits/stdc++.h>
using namespace std;

/*
    if a[i] % 2 == 0 then even_count += arr[i];
    else odd_count += arr[i];
*/

int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        int n; cin>> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>> arr[i];
        }

        int even_count = 0, odd_count=0;
        for(int i=0; i<n; i++){
            if(arr[i]%2 == 0){
                even_count += arr[i];
            }else{
                odd_count += arr[i];
            }
        }

        if( even_count > odd_count){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}