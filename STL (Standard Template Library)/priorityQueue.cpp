#include<iostream>
#include<queue>
using namespace std;


int main(){
    // max heap
    priority_queue <int> maxi; // [3, 2, 1, 0], top=3

    // min heap
    priority_queue <int, vector<int>, greater<int> > mini; // [0,1,3,4,5]. top=0


    // data push in maxi
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<< "size -> "<< maxi.size()<<endl;

    int n = maxi.size();
    for(int i = 0; i<n; i++){
        cout<<maxi.top()<<" "; // 1st e boro number print hobe;
        maxi.pop();
    }cout<< endl;




     // data push in mini
    mini.push(5);
    mini.push(4);
    mini.push(1);
    mini.push(0);
    mini.push(3);
    cout<< "size -> "<< mini.size()<<endl;

    int m = mini.size();
    for(int i = 0; i<m; i++){
        cout<<mini.top()<<" "; // 1st e choto number print hobe;
        mini.pop();
    }cout<< endl;


}