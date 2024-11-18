#include<iostream>
#include<deque>
using namespace std;


int main(){
    deque<int> d;
    d.push_back(1); // last element push
    d.push_front(2); // 1st element push

    for(int i:d){
        cout<< i << " ";
    }cout<< endl;
    
    cout<< "Print first index element "<< d.at(0)<< endl;

    cout<< "Front : "<< d.front()<<endl;
    cout<< "Back : "<< d.back()<<endl;

    cout<< "empty or not"<< d.empty()<< endl;

    cout<< "before erase : "<< d.size()<<endl;
    //from begin to begin+2 element
    // front =2; back =1; (2,1) or if(2,4,5,3,1)
    // so start from 2(bt 2 won't be erased) and 2 elemnt will erased, ans will be (2,3,1)
    d.erase(d.begin(), d.begin()+1);
    cout<< "After erase: "<< d.size()<<endl;
    for( int i:d){
        cout<< "after erase: "<< i<< " ";
    }cout<<endl;


}