#include<iostream>
#include<array> //STL array library
using namespace std;

int main(){
    int basic[3] = {1,2,3}; //how we define a normal array

    // how we define array int STL
    // structure:
    //  array<(type of array),(size of array)> array_name = {array}   
    array<int,4> a = {1,2,3,4};

    // print size of array a
    int size = a.size();

    for(int i=0; i < size; i++ )
    {
        cout<< a[i]<< endl;
    }

    // print any specific element:
    cout<<"element at 2nd index: "<< a.at(2)<<endl;

    //check if the array is empty or not:
    cout<< "empty or not: "<< a.empty() <<endl;

    // print 1st and last element of array:
    cout<<"First element: "<< a.front()<<endl;
    cout<<"Last Element : "<< a.back()<<endl;






}
