#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n >= 0) {
        cout << n << endl;
        return 0;
    }

    string s = to_string(n);

    if (s.length() <= 2) {
        cout << 0 << endl;
        return 0;
    }

    string option1 = s;
    string option2 = s;

    option1.erase(option1.end() - 1);     
    option2.erase(option2.end() - 2);

    int result = max(stoi(option1), stoi(option2));
    cout << result << endl;

    return 0;
}
