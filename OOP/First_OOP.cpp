#include<iostream>
using namespace std;

class Addition//class name starts with capital letter
{
    public:
    int c;
    // int a,b,c;

    void result(int a, int b){
        // cin>>a>>b;
        c = a+b;
        cout<< "the result is : "<< c;
    }//class end with a ";"
};

int main(){
    Addition ob;//class=Addition; Variable=ob;
    int a,b;
    cin>> a>> b;
    ob.result(a,b);//class.object;
    return 0;
} 