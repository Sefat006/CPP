#include <bits/stdc++.h>
using namespace std;



int main()
{   
    int n; cin>> n;
    int count = 0;
    vector< pair<string, string>> vec;
    string x , y;
    for( int i=0; i<n; i++){
        cin>> x>> y;
        vec.push_back({x,y});
    }

    for( int i=0; i<vec.size(); i++){
        int flag = 0;
        for( int j=i+1; j<vec.size(); j++){
            if( vec[i].first == vec[j].first && vec[i].second == vec[j].second)
                flag = 1;
        }
        if( flag == 0){
            count = count+1+flag;
        }
    }
    
    cout<<count<<endl;


    return 0;
}