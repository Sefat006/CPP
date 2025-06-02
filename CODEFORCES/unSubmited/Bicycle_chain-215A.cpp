#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int arrPedal[n];
    for (int i = 0; i < n; i++) cin >> arrPedal[i];

    int m; cin >> m;
    int arrRear[m];
    for (int i = 0; i < m; i++) cin >> arrRear[i];

    map<int,int> mp;

    for (int i = 0; i < n; i++) {
        int maxDiv = 0;
        for (int j = 0; j < m; j++) {
            if (arrRear[j] % arrPedal[i] == 0) {
                int division = arrRear[j] / arrPedal[i];
                maxDiv = max(maxDiv,division);
            }
        }
        if(maxDiv > 0) mp[maxDiv]++;
    }

    int maxvalue = 0;
    for (auto &[key, value] : mp) {
        if(key != 1) maxvalue = max(maxvalue, value);
    }

    if(maxvalue == INT_MIN) maxvalue = mp[1];

    if( n == 1 || m==1) cout<< 1<<endl;
    else cout << maxvalue << endl;

    return 0;
}
