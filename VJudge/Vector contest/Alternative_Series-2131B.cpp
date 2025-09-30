#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> vec;
        vec.push_back(-1);

        for(int i=1; i<n-1; i++){
            if( i%2 != 0){
                vec.push_back(3);
            }else{
                vec.push_back(-1);
            }
        } 

        if( n%2 == 0) vec.push_back(2);
        else vec.push_back(-1);

        for (int i=0; i<n; i++) {
            cout<<vec[i]<<" ";
        }cout<<endl;
    }


    return 0;
}