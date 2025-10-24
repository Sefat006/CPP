#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, string> phoneBook;

    for (int i = 0; i < n; i++) {
        string name, number;
        cin >> name >> number;
        phoneBook[name] = number;
    }

    string query;
    while (cin >> query) {
        if (phoneBook.find(query) != phoneBook.end()) {
            cout << query << "=" << phoneBook[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}
