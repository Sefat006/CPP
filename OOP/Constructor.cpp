#include<iostream>
using namespace std;

class Addition{
    public:
    int c;

    Addition(int p, int q){
    //constructor must named the same as the class;
    //here, Addition is a constructor;
    c = p+q;
    cout<<"the result is : "<<c;
    }
};


int main(){
    // int a,b;
    // cin>> a>> b;
    // Addition ob(a, b);
    Addition ob(10, 20);//ob object;
    

    return 0;
}