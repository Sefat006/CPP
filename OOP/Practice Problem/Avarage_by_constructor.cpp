#include<iostream>
using namespace std;

class Average{
    public:
    float result;

    Average(int a, int b, int c, int d){
        result = (a+b+c+d)/4;
        cout<<"the Avarage is : "<<result;
    }

};

int main(){

    Average(10, 20, 30, 40);

    return 0;
}