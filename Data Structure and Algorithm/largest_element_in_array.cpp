
// searching the largest element in an array;
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of element: ";
    cin>> n;

    //array size will be n, which will given by the user;
    int a[n]; 

    //taking the array input;
    for ( int i = 0; i<n; i++)
    {
        cin>>a[i];
    }

    int largest = INT_MIN; //we declared that the minimum number is the largest; 
    for(int i=0; i<n; i++ )
    {
        //now the loop will continue to every element in array and if it find any element greater than largest(the minimum number), it will assign the number as the largest and the loop will continue like this until it reach to the last element
        if( a[i] > largest )
        {
            largest = a[i];
        }
    }

    cout<<"largest element is : "<<largest<<endl;

    return 0;
}