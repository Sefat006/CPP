#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Number of rows in the grid
        cin >> n;

        vector<string> s(n); // Vector to store each row of the grid as a string
        vector<int> pos;     // To store positions (columns) of '#' characters found

        // Taking n strings as input, one per row
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        // Traverse from the bottom row to the top row
        for (int i = n - 1; i >= 0; i--) {

            // Traverse across each character (column) of the current row
            // s[i][j] means: i = current row index, j = current column index
            // Since each s[i] is a string (i.e., a row), s[i][j] gives you the character at column j in row i
            for (int j = 0; j < 4; j++) {
                if (s[i][j] == '#') {
                    // Found '#' at row i and column j (0-based)
                    // Store column index as 1-based in pos vector
                    pos.push_back(j + 1);
                }
            }
        }

        // Print all stored positions (columns where '#' was found, from bottom to top)
        for (int i = 0; i < pos.size(); i++) {
            cout << pos[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
