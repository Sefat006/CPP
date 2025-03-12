#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string word;
    cin >> word;

    // Convert the first character to uppercase
    word[0] = toupper(word[0]);

    cout << word << endl;

    return 0;
}