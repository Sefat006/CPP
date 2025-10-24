#include<bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin >> s;

    bool isSandwich = true;

    int len = s.size();

    
    if (!isupper(s[0]) || !isupper(s[len - 1])) {
        isSandwich = false;
    }

    for (int i = 1; i < len - 1; i++) {
        if (!isdigit(s[i])) {
            isSandwich = false;
            break;
        }
    }

    
    if (isSandwich) { 
        string sub = s.substr(1, len - 2); 
        
        if (!(sub >= "100000" && sub <= "999999")) {
            isSandwich = false;
        }
    }

    cout << (isSandwich ? "Yes" : "No") << endl;

    return 0;
}