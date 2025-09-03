#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);

bool allTheSame(vector<int> &vec){
    return all_of(vec.begin(), vec.end(), [&](int x){
        return x==vec[0];
    });
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    vector<int> vec(n);
    for (int i=0; i<n; i++) {
        cin>>vec[i];
    }

    if(allTheSame(vec)){
        cout<< 0<<endl;
        return 0;
    }

    sort(vec.begin(), vec.end());

    int middle = vec[n/2];
    long long ans = 0;

    for (int i=0; i<n; i++) {
        ans = ans+ abs(middle-vec[i]);
    }

    cout<<ans<<endl;


    return 0;
}