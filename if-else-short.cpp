#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int a,b,c;
    cout<< "input a,b,c: ";
    cin>> a>> b>>c;

    // cout<< ((a>b && a>c)? "a is the large": "c is the large")<< endl;
    cout<<((b>c) ? ((a>b && a>c) ? "a is the largest" : "b is the largest") : "c is the largest");

    // condition1 ? (condition2 ? result_if_both_conditions_true : result_if_condition1_true_but_condition2_false) : result_if_condition1_false


    getch();
}