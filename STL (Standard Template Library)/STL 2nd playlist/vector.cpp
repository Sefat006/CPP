#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout<<"output of vector v : ";
    for(int i : v){
        cout<< i << " ";
    }cout<<endl;
}

int main()
{
    vector<int> v;

    // userInput of vector
    int n;
    cin>> n;
    for(int i = 0; i < n; i++){
        int x;
        cin>> x;
        v.push_back(x);
    }

    printVec(v);

    return 0;
}