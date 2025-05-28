#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        int n, k;
        cin>> n >> k;
        vector<int>arr(n);
        for(int i=0; i<n;i++){
            cin>> arr[i];
        }

        set<int> a;
        for(int i=0; i<n; i++){
            a.insert(arr[i]);
        }

        bool arr_is_sorted = is_sorted(arr.begin(), arr.end());


        if( arr_is_sorted==true || n == k){
            cout<<"YES"<<endl;
        }else if( n > k && k == 1 ){
            cout<< "NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
    
    return 0;
}