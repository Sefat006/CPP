// Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.

#include<iostream>
#include<cmath>
using namespace std;

const double pi = 3.1416;

class Circle {
    private:
        double radius;

    public:
        double area, circumference;

        //constructor;
        //radius = rad => radius is private variable, thats why we declared a new variable "rad" and then assigned radius = rad;
        Circle(double rad){
            radius = rad;
        }
        double calculateArea(){
            return pi*pow(radius, 2);
        }
        double calculateCircumference(){
            return 2*pi*radius;
        }
};

int main(){
    double radius;//we also have to declare the variables on this function because radius is not a global function;
    cout<<"input radius: ";
    cin>> radius;
    Circle circle(radius);//call the constructor and the variable of constructor then put the value of perameter (double rad);

    double area = circle.calculateArea();
    cout<<"the Area is : "<<area<<endl;

    double circumference = circle.calculateCircumference();
    cout<<"the circumference is : "<<circumference<<endl;

    return 0;
}