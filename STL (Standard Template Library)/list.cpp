#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);
    for(int i: l){
        cout<< i<< " ";
    }cout<< endl;


    // erase
    l.erase(l.begin());
    cout<< "after erase"<< endl;
    for(int i:l){
        cout<< i<<" ";
    }cout<< endl;

    // l.size()
    //copy: list <int> n(l)










}