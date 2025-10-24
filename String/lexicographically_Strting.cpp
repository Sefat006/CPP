#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> words(n);
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    string smallest = words[0]; // assume first is smallest

    for (int i = 1; i < n; i++) {
        if (words[i] < smallest) {
            smallest = words[i];
        }
    }

    cout << "\nLexicographically smallest string: " << smallest << "\n";


    sort(words.begin(), words.end());
    cout<<"\nStrings in lexicographical order:\n";
    for(auto word : words){
        cout<<word<<" ";
    }cout<<endl;
    return 0;
}
