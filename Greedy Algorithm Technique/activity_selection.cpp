
// Problem: You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time

// sample test cases:
// input: 
// 3
// 10 20
// 12 15
// 20 30

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector< vector<int> > v;
    
    for(int i=0; i<n; i++){
        int start, end;
        cin>> start>> end;
        v.push_back({start, end});
    }

    for(int i:v){
        cout<< i<< " ";
    }cout<<endl;

}