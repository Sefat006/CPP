#include <bits/stdc++.h>
using namespace std;



int main(){
    stack<string> s;

    s.push("ANM ");
    s.push("Sefatur ");
    s.push("Rahman");

    
    // last in first out (LIFO)
    cout<< " top element : "<< s.top()<<endl;
    
    s.pop();
    cout<< "top element after a pop : "<<s.top()<<endl;
    cout<<" Size : "<< s.size()<< endl;

    return 0;
}