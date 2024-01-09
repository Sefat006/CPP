#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
    cout<< "enter the number of row= ";
    cin>> r;
    cout<< "enter the number of column= ";
    cin>> c;

    cout<< "enter the first matrix element= \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"\na["<<i<<"]["<<j<<"]=  ";
            cin>> a[i][j];
        }
    }
    

    cout<< "enter the second matrix element=\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"\nb["<<i<<"]["<<j<<"]=  ";
            cin>> b[i][j];
        }
    }

    cout<< "multiplication of the matrix a & b: \n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++){
                mul[i][j]=mul[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    //printing result;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<< mul[i][j]<<"\t";//this will put gap between elements in every row;
        }
        cout<<"\n";//to go on a new line after every loop;
        //that means if the matrix is 3X3 than the loop will change after every 3 element;
    }
    getch();
}