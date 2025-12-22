#include <bits/stdc++.h>
using namespace std;
//const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    vector<int> v(n);
    int cnt;
    bool ok = false;
    for (int i=0; i<n; i++) {
        cin>>v[i];
    }

    auto it = min_element(v.begin(), v.end());
    int minVal = *it;

    int countMin = count(v.begin(), v.end(), minVal);

    if(countMin > 1){
        cout<<"Still Rozdil\n";
    }else{
        cout<< (distance(v.begin(), it) + 1)<<endl;
    }

    return 0;
}