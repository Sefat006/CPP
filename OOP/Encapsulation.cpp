#include<iostream>
using namespace std;

class Student
{
    private:
        double gpa;
    public:
        void setGpa(double x){
            gpa = x;
        }
        double getGpa()
        {
            return gpa;
        }
};

int main(){
    Student ob;
    ob.setGpa(3.75);
    cout<<ob.getGpa();
}