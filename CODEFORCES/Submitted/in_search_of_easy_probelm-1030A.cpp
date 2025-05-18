#include <bits/stdc++.h>
using namespace std;

bool allSame(vector<int> &arr){
    return all_of(arr.begin(), arr.end(), [&](int x){
        return x==0;
    });
}

int main()
{
    int n;
    cin>> n;

    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>> vec[i];
    }

    if(allSame(vec)){
        cout<<"EASY"<<endl;
    }else{
        cout<<"HARD"<<endl;
    }



    return 0;
}