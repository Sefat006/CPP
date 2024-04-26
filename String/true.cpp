#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[2],b[2];
    cin>> a>> b;
    if(strcmp(a, b)==true){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}