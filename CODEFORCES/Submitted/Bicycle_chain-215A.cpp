#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arrPedal[n];
    for (int i=0; i<n; i++) {
        cin>> arrPedal[i];
    }
    int m; cin>> m;
    int wheel;

    vector<int> b;// to store the ratio;

    for (int j=0; j<m; j++) {
        cin>> wheel;

        for (int i=0; i<n; i++) {
            if( wheel % arrPedal[i] == 0 ) b.push_back( wheel / arrPedal[i] );
        }
    }

    int maximum = *max_element(b.begin(), b.end());
    cout<< count(b.begin(), b.end(), maximum)<<endl;

    return 0;
}
