#include<iostream>
#include<vector>
using namespace std;


int main(){
    // a integer vector;
    vector<int> v;
    cout<<"Size of Vector: "<< v.capacity()<< endl;

    //another vector:
    vector<int> a(5,1); //a = 1 1 1 1 1
    cout<< "print a"<< endl;
    for( int i:a){
        cout<< i<< " "; 
    }cout<< endl;

    // copying "a" vector into vector "last"
    vector<int> last(a);
    cout<< "Print copied vector of a into Last"<<endl;
    for(int i: last){
        cout<< i<< " ";
    }cout<< endl;

    // push element capacity of vector v
    v.push_back(1);
    cout<<" capacity of v -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<" capacity of v -> "<<v.capacity()<<endl;

    //after that command, it will double the capacity, means now the capacity will be 4
    v.push_back(3); 
    cout<<" capacity of v -> "<<v.capacity()<<endl;
    
    // size is 3 but capacity is 4, 1 element can also add
    cout<< "Size of vector v : "<< v.size() << endl;

    cout<< "element at 1 in v is : " << v.at(1)<<endl;

    cout<< "first element in v "<< v.front() <<endl;
    cout<< "last element in v "<< v.back() <<endl;

    // push and pop 
    cout<<"before pop v "<<endl;
    for(int i:v){
        cout<< i<< " ";
    } cout<< endl;

    v.pop_back();
    cout<< " after pop v "<< endl;
    for(int i:v){
        cout<<i<< " ";
    }

    //clear size
    v.clear(); // makes capacity 0;



}