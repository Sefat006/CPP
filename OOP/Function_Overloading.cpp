#include<iostream>
using namespace std;

class Calculate
{
    public:
        int result;
        double result2;

        void add(int p){
            result = p+p;
            cout<< result << endl;
        }
        void add(int p, int q){
            result = p+q;
            cout<< result<< endl;
        }

        void add(double p){
            result2 = p+p;
            cout<< result2 <<endl;
        }
};


int main(){
    Calculate ob;
    ob.add(10);
    ob.add(10,20);
    ob.add(20.2);
    return 0;
}