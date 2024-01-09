#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int r,c,a[10][10],b[10][10],sum[10][10],i,j;
    cout<<"enter the number of row: ";
    cin>> r;
    cout<<"enter the number of column: ";
    cin>> c;

    //taking input a[10][10];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]: ";
            cin>> a[i][j];
        }
    }
    //taking input b[10][10]
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"b["<<i<<"]["<<j<<"]: ";
            cin>> b[i][j];
        }
    }

    //addition;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }

    // displaying sum;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<"\t"<<sum[i][j];
        }
        cout<<"\n";
    }

    
    



    getchar();
}