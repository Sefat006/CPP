#include<iostream>
using namespace std;
int main()
{
    int num[] = {10,20,15,35,44,85,2};
    int value, pos = -1; 
    //by declaring position = -1, we are assuming that the specific number is not available in the array;

    cout<<"enter the value u want to search: "<<endl;

    cin>> value;

    for (int i=0; i<7; i++)
    {
        if(value == num[i])
        {
            pos = i + 1; //if the value is found, then the position will be counted;
            break;
        }

    }

    if(pos == -1) //if the value isn't found in the array;
    {
        cout<<"the value is not found"<<endl;
    }
    else{
        cout<<"the value is at "<<pos<<endl;
    }





    return 0;
}