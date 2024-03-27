#include<iostream>
using namespace std;

class Addition{
    public:
    int c;

    Addition(int p, int q){
    //here, Addition is a constructor;
    c = p+q;
    cout<<"the result is : "<<c;
    }
};


int main(){
    int a,b;
    cin>> a>> b;
    Addition ob(a,b);//ob object;
    

    return 0;
}