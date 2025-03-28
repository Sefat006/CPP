#include <bits/stdc++.h>
using namespace std;

// In this problem you must find longest substring consisting of equal characters and compare it with 7.

int main()
{
    string s;
    cin>> s;
    int n = s.size();


    int count = 1, max_count = 1;
// counts consecutive repeating characters and resets count when a new character appears
for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
        count++; // Increase count if same as previous character
        max_count = max(max_count, count); // Track the max sequence length
    } else {
        count = 1; // Reset count if characters change
    }
}

    if( max_count >= 7 ){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    

    return 0;
}