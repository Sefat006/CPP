#include <bits/stdc++.h>
using namespace std;


int minimumCoin(vector<long long> w,long long n, long long c, bool descending){
    if(descending) sort(w.rbegin(), w.rend());
    else sort(w.begin(), w.end());

    int coin=0;
    for (long long i=0; i<n; i++) {
        if( w[i] > c) coin++;
        else {
            for (long long j=i+1; j<n; j++) {
                w[j] = w[j]*2;
            }
        }
    }

    return coin;
}



int main()
{
    long long t; cin>> t;

    while(t--){
        long long n,c; cin>> n>>c;
        vector<long long> weight(n);
        for (long long i=0; i<n; i++) {
            cin>>weight[i];
        }
        
        bool greater_than_c = all_of(begin(weight), end(weight), [c](int x){
            return x>c;
        });
        
        if(greater_than_c){
            cout<<n<<endl;
            continue;
        }

        // sort(weight.rbegin(), weight.rend());

        // for (long long i=0; i<n; i++) {
        //     if( weight[i] > c) coin++;
        //     else {
        //         for (long long j=i+1; j<n; j++) {
        //             weight[i] = weight[i]*2;
        //         }
        //     }
        // }

        int coin_1 = minimumCoin(weight, n, c, true);
        int coin_2 = minimumCoin(weight, n, c, false);

        cout<< min(coin_1, coin_2) <<endl;


    }

    return 0;
}