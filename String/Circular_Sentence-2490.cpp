#include <bits/stdc++.h>
using namespace std;


bool isCircularSentence(string sentence) {
    istringstream iss(sentence);
    string word;
    vector<string> words;

    // Split the sentence into words
    while (iss >> word) {
        words.push_back(word);
    }
    // sentence = cool loop;
    // Words = ["cool", "loop"]
    int n = words.size();

    // Special case: only one word
    if (n == 1) {
        return words[0].front() == words[0].back();
    }

    // General case: check each word's last letter with next word's first letter
    for (int i = 0; i < n; i++) {
        char lastChar = words[i].back();
        char nextFirstChar = words[(i + 1) % n].front(); // wrap-around

        if (lastChar != nextFirstChar) {
            return false;
        }
    }

    return true;
}

    int main(){
        string sentence;
        getline(cin, sentence);

        isCircularSentence(sentence);
    }