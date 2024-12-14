#include <bits/stdc++.h>
using namespace std;



int main()
{
    map<string, int> myMap;

    int n; //size of map;
    cout<< "input n: ";
    cin>> n;

    for(int i=0; i<n; i++){
        string key;
        int value;
        cout<< "enter key and value pair of "<< i+1<< " : ";
        cin>> key>> value;
        myMap[key] = value;
    }

    //print 
    for(auto p : myMap){
        cout<<p.first <<" : "<<p.second<<endl;
    }

    return 0;
}