#include <bits/stdc++.h>
using namespace std;

int solve(const vector<int> &arr, int n) {
    int count = 0;

    // if(n <= 2 && (arr[0]-arr[1])) return -1;

    for (int i = 0; i < n - 1; i++) {
        int j = i + 1;
        if ((arr[i] - arr[j]) <= 1 && (arr[i] - arr[j]) >= 0) {
            return count;
        }
        else if (arr[i] > arr[j]) {
            count++;
            return count;
        }
    }

    return -1;
}

int main() {
    int t; cin >> t;

    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int res = solve(arr, n);
        cout << res << endl;
    }

    return 0;
}
