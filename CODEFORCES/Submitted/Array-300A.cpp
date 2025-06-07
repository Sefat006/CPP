#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long n; cin>> n;

    vector<long long> arr(n);
    vector<long long> set1;
    vector<long long> set2;
    vector<long long> set3;
    for (long long i=0; i<n; i++) {
        cin >> arr[i];
        if( arr[i] == 0) {set3.push_back(arr[i]);}
        else if( arr[i]<0) set1.push_back(arr[i]);
        else {set2.push_back(arr[i]);}
    }

    while (set1.size() >= 2) {
        set3.push_back(set1.back());
        set1.pop_back();
    }

    if(set2.empty()==true){
        if ( set3.size() > 2){
            set2.push_back(set3.back());
            set3.pop_back();
            set2.push_back(set3.back());
            set3.pop_back();
        }
    }   

    cout<<set1.size()<<" ";
    for (long long i=0; i<set1.size(); i++) {
        cout<<set1[i]<<" ";
    }cout<<endl;
    cout<<set2.size()<<" ";
    for (long long i=0; i<set2.size(); i++) {
        cout<<set2[i]<<" ";
    }cout<<endl;
    cout<<set3.size()<<" ";
    for (long long i=0; i<set3.size(); i++) {
        cout<<set3[i]<<" ";
    }cout<<endl;

    return 0;
}