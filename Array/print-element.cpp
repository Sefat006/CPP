#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[100],n,i,x;
    cout<<"enter the array length, n: ";
    cin>> n;

    cout<<"enter the array elements: "<<endl;
    for(i=0;i<n;i++){
        cin>> a[i];
    }

    cout<<"print the array elemnts: "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    


    getch();
}
