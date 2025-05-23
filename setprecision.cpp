#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float f;
    double l;
    cout<< "input: ";
    cin>> f >> l;
    cout<<showpoint;//waiting only this will show the 0 at last after point; example : 2.3210
    cout<< setprecision(4);//if we do not use fixed; than it will count 4 including " . ";
    cout<< fixed;
    cout<< f << endl;
    cout<< noshowpoint;
    cout<< l;

    return 0;
}