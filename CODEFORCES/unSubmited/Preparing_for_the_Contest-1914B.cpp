#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>>t;

    while(t--){
        int n, k; cin>>n>>k;

        vector<int> vec(n);

        int y=1;
        for(int i=n-k-1; i>=0; i--){
            vec[i] = y;
            y++;
        }

        int x= n-k+1;
        for(int i=n-k; i<n; i++){
            vec[i]=x;
            x++;
        }


        for (int i=0; i<n; i++) {
            cout<<vec[i]<<" ";
        }cout<<endl;
    }

    return 0;
}