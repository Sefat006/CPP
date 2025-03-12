#include<iostream>
using namespace std;



int main()
{
    int x;
    cin>> x;
    
    int minimumSteps = 0;
    if( x % 5 == 0){
        minimumSteps = x/5;
    }
    else{
        minimumSteps = (x/5) + 1;
    }

    cout<< minimumSteps<<endl;
    return 0;
}