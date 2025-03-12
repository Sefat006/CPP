#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(const string &s) {
    string rev = s;
    reverse(rev.begin(), rev.end()); // Reverse using STL
    return s == rev; // Compare original and reversed string
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (isPalindrome(s)) {
        cout << "Palindrome\n";
    } else {
        cout << "Not a Palindrome\n";
    }

    return 0;
}
