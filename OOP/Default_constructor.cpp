#include<iostream>
using namespace std;

class Addition{
    public:
    int a,b,c;

    Addition(){
    //here, Addition is a constructor;
    cin>> a>> b;
    c = a+b;
    cout<<"Default Constructor : "<<c;
    }
};


int main(){
    
    Addition ob;//ob object;
    
    return 0;
}