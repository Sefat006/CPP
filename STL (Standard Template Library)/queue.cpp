#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("ANM ");
    q.push("Sefatur ");
    q.push("Rahman");

    // FIFO (First in First Out)
    cout<< "first before pop element : "<< q.front()<<endl;
    
    
    q.pop();
    cout<< "first after pop element : "<< q.front()<<endl;

}