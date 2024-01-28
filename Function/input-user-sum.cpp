#include<iostream>
#include<conio.h>
using namespace std;


int sum(){//User input nile perimeter declare korte hoy na;
    int a,b;
    cout<< "input a and b : ";
    cin>> a >> b;
    int result = a+b;
    return result;
}

int main(){
    int product = sum();
    cout<< "result = "<< product<< endl;

    getch();
}