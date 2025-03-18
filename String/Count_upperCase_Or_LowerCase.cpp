#include <iostream>
#include <algorithm> // For count_if
#include <cctype>    // For isupper() and islower()

using namespace std;

int main() {
    string str = "HelloWORLD123";

    int uppercaseCount = count_if(str.begin(), str.end(), ::isupper);
    int lowercaseCount = count_if(str.begin(), str.end(), ::islower);

    cout << "Uppercase letters: " << uppercaseCount << endl;
    cout << "Lowercase letters: " << lowercaseCount << endl;

    return 0;
}
