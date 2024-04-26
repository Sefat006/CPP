 #include<iostream>
using namespace std;

int main(){

    int num = 5;
    cout<< num<< endl;

    //address operator - &
    cout<< " address of num is : "<< &num<< endl;

    int *ptr = &num;

    cout<< " adress is : "<< ptr << endl;
    cout<< " value is : "<< *ptr << endl;




}
