// Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.
#include<iostream>
#include<cmath>
using namespace std;

class Rectangle{
    private:
        double length, width;
    
    public:
        Rectangle(double l, double w){
            length = l;
            width = w;
        }

        double calculateArea(){
            return length*width;
        }
        double calculateCircumference(){
            return 2*(length+width);
        }
};


int main(){
    double length, width;
    cout<<"input length and width: ";
    cin>>length>> width;
    Rectangle ob(length, width);

    double area = ob.calculateArea();
    cout<<"Area = "<<area<<endl;

    double circumference = ob.calculateCircumference();
    cout<<"circumference = "<<circumference<<endl;

    return 0;
}