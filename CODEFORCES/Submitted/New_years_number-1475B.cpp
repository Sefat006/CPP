#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;

    while (t--) {
    int n;
    cin >> n;
    bool found = false;

    while (n >= 0) {
        if (n % 2020 == 0) {
            found = true;
            break;
        }
        n -= 2021;
    }

    if (found)
        cout << "YES\n";
    else
        cout << "NO\n";
}

    return 0;
}
