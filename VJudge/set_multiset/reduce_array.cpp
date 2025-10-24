#include <iostream>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        multiset<long long> ms;

        for (int i = 0; i < n; i++) {
            long long x; cin >> x;
            ms.insert(x);
        }

        long long total = 0;

        while (ms.size() > 1) {
            
            auto it1 = ms.begin();
            long long a = *it1;
            ms.erase(it1);

            auto it2 = ms.begin();
            long long b = *it2;
            ms.erase(it2);

            long long sum = a + b;
            total += sum;

            ms.insert(sum); 
        }

        cout << total << "\n";
    }

    return 0;
}
