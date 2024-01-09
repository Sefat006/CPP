#include<iostream>
using namespace std;

int main()
{
    int n,a[100],i,x;
    cout<<"give the length of array: ";
    cin>>n;

    cout<<"enter the element of array: ";
    for(i=0;i<n;i++){
        cin>> a[i];
    }

    cout<<"enter the value to search: ";
    cin>> x;

    for(i=0;i<n;i++){
        if(a[i]==x){
            cout<<"value found at "<<i;
            return 0;
        }
    }
    cout<<"value not found";

    return 0;
}