
// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include<iostream>
#include<string.h>
using namespace std;

class Person{
    private:
        int a;
        char n, c;

    public:
        char name, country;
        int age;
        void function(){
            name = n;
            age = a;
            country = c;
            cout<<"input age=";
            cin>>age;
            cout<<endl;
            cout<<"input name : ";
            getchar(name);
            cout<<endl;
            cout<<"input country name : ";
            getchar(country);
            cout<<endl;
        }

};

int main(){
    Person obj;
    obj.function();
    cout<< obj.name<<endl<< obj.age<<endl<<obj.country;
    return 0;
}
