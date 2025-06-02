#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n;i++){
            cin>> arr[i];
        }

        vector<int> brr;
        for(int i=0, j=n-1; i<j;){
            brr.push_back(arr[i]);
            brr.push_back(arr[j]);
            i++;
            j--;

        }
        
            if(n%2!=0){
            brr.push_back(arr[n/2]);
            }
        
        

        for(int i:brr){
            cout<<i<<" ";
        }cout<<endl;
    }
    
    return 0;
}