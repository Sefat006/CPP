#include <bits/stdc++.h>
using namespace std;

/*
    let n = 5 ;
    A(2)+B(2)+A(1)+C(2)+B(1) = 8;

    SO approach will be 
    count = n; counting every element;
    problem_solved.. = storing every character's appearance;

    then sum = count + problem_solved... ;
*/

int balloons(vector<string> &str, int n)
{
    unordered_map<char, int> freq; // This will store every character once.
    int count = n; // Each submission gets 1 extra balloon

    // Loop through each string and each character
    for (string s : str) {
        for (char ch : s) {
            freq[ch]++; // Count how many times each problem is solved
        }
    }

    // Counting how many unique problems are solved
    int problem_solved_1st_time = freq.size();

    // Calculate the total sum of balloons
    count = count + problem_solved_1st_time;

    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<string> str(n);
        for (int i = 0; i < n; i++) {
            cin >> str[i];
        }

        int ans = balloons(str,n);

        cout << ans << endl;
    }

    return 0;
}
