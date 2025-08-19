#include <bits/stdc++.h>
using namespace std;

bool allSame(const vector<int> &vec){
    return adjacent_find(vec.begin(), vec.end(), not_equal_to<int>()) == vec.end();
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        vector<int> vec;
        for (int i=0; i<n; i++) {
            cin >> arr[i];
            if (arr[i] != -1) { 
                vec.push_back(arr[i]);
            }
        }

        if( vec.empty() ) {
            cout<<"YES\n";
        }else{
            if(allSame(vec) && vec.front() > 0){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}