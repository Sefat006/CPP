#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        int digit = 9;

        while(x > 0){
            int num = x % 10;
            digit = min(digit, num);
            x = x / 10;
        }

        cout << digit << endl;
    }

    return 0;
}
