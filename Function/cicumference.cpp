#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
#define PI 3.1416

void circle(float radius){
    cout<< "perimeter/circumference is: "<< 2 * PI * radius<<endl;
    cout<< "area is :" << PI* radius * radius;
}

int main(){
    circle(3.34);
    getch();
}


