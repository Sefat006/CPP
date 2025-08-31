#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>>t;

    while(t--){
        int n, k, a;
        cin>> n>> k>> a;

        if( (k-a)>1 || k>n){
            cout<<-1<<endl;
            continue;
        }

        vector<int> vec(n);
        for(int i=0; i<k; i++){
            vec[i] = i;
        }

        // for (int i=0; i<n; i++) {
        //     cout<<vec[i]<<" ";
        // }cout<<endl;

        int size = vec.size() - k;
        // cout<<" size of the array: "<<size<<endl;

        if( k == a){
            for (int i=k; i<n; i++) {
                vec[i] = k-1;
            }
        }else{
            for(int i=k; i<n; i++){
                vec[i] = a;
            }
        }



        // for (int i=0; i<n; i++) {
        //     cout<<vec[i]<<" ";
        // }cout<<endl;

        cout<<accumulate(vec.begin(), vec.end(), 0)<<endl;

    }

    return 0;
}