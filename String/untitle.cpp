#include <bits/stdc++.h>
using namespace std;

int main() {
    string s ;
    getline( cin, s);
    // Creating a temporary reversed string
      // and assigning it to the s
    s = string(s.rbegin(), s.rend());
    
      cout << s;
    return 0;
}