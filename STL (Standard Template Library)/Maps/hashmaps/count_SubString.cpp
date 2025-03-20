#include <bits/stdc++.h>
using namespace std;



/*
    🔹 i = 0 হলে:
    s.substr(0, 2) মানে প্রথম দুইটা অক্ষর নেবে।
    যদি s = "abacaba" হয়, তাহলে s.substr(0, 2) = "ab"।
    তারপর freq["ab"]++, অর্থাৎ "ab" এর সংখ্যা ১ বাড়বে।

    🔹 i = 1 হলে:
    s.substr(1, 2) = "ba" (index 1 থেকে 2 অক্ষর)।
    freq["ba"]++, "ba" এর সংখ্যা ১ বাড়বে।

    🔹 i = 2 হলে:
    s.substr(2, 2) = "ac"।
    freq["ac"]++, "ac" এর সংখ্যা ১ বাড়বে।
    এভাবে পুরো স্ট্রিং স্ক্যান করা হবে, প্রতিটি ২-অক্ষরের অংশ ম্যাপে সংরক্ষণ হবে এবং তার সংখ্যা গণনা হবে।


*/

int main()
{
    int n; // length of string s;
    cin>> n;

    string s;
    cin>> s;

    unordered_map<string, int> freq;
    string maxSubString; // store the subString that appeared the maximum time;
    int maxCount = 0;

    for( int i=0; i<n; i++){
        string SubString = s.substr(i,2); // Extract two consecutive characters
        freq[SubString]++;

        if(freq[SubString] > maxCount){
            maxCount = freq[SubString];
            maxSubString = SubString;
        }
    }

    cout<< maxSubString<<endl;
    return 0;
}