#include<iostream>
using namespace std;


class Tutorial{
    public:
        Tutorial(){
            cout<<"this is constructor"<<endl; 
        }
        void display(){
            cout<<"this is display function"<<endl;
        }
        ~Tutorial(){
            cout<<"this is destructor";
        }
};



int main(){

    Tutorial t;
    t.display();

    return 0;
}


