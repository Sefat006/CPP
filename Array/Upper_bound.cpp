#include <bits/stdc++.h>
using namespace std;

/*
    Array: 1 3 3 5 7 9 
    Target: 4 
    First element >= 4 is 5 at index 3
*/

int main()
{
    vector<int> a = {4, 5, 5, 7, 8, 25};
    sort(a.begin(), a.end()); // ensure vector is sorted

    for (int x : a) cout << x << " ";
    cout << endl;

    int target = 25;

    // upper_bound returns iterator to the first element > target
    auto it = upper_bound(a.begin(), a.end(), target);

    if (it != a.end()) {
        int val = *it;                // value greater than target
        int index = it - a.begin();   // index of that value

        cout << val << endl;          // value =  (no element > 25, so this won't run)
        cout << index << endl;        // index = 
    } else {
        cout << "No element greater than " << target << endl;
    }

    return 0;

    return 0;
}