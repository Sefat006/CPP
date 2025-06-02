#include <bits/stdc++.h>
using namespace std;





int main()
{
    int n; cin>> n;
    vector<int> arr(n);
    for(int i=0; i<n;i++) cin>> arr[i];

    // sort(arr.rbegin(), arr.rend());

    
    int sareja = 0, dima = 0, count = 0;
    
    for(int i=0,j=n-1; i<=j;){
        if(count%2 == 0)
            (arr[i]>arr[j]) ? (sareja+=arr[i], i++) : (sareja+=arr[j], j--);
        else
            (arr[i]>arr[j]) ? (dima+=arr[i], i++) : (dima+=arr[j], j--);


        count++;
    }

    cout<<sareja<<" "<<dima<<endl;


    return 0;
}