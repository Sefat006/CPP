#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n; cin>> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }

    if( n<=2 && all_of(arr.begin(), arr.end(), [&](int x){return x==arr[0];})){
        cout<< n<<endl;
        return 0;
    }

    int sum = accumulate(arr.begin(), arr.end(), 0);
    int count = 0;
    int a = 0;
    sort(arr.rbegin(), arr.rend());

    for (int i=0; i<n; i++) {
        a = a + arr[i];
        int sub = sum - a;
        count++;
        if( a>sub){
            cout<< count <<endl;
            break;
        }
    }


    return 0;
}