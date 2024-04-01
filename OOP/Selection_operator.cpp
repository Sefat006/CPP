#include<iostream>

using namespace std;

class Addition{
    public:
    int c;

    void learn(){
        cout<<"We are going to learn Selecting Operator"<<endl;

    }
};



int main()
{
    Addition ob;
    Addition *p;

    p->learn();// '->' is the selection operator;

    return 0;
}