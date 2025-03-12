#include <bits/stdc++.h>
using namespace std;

/*

. The following series of operations is valid:

Choose two distinct indices i and j
Then, choose a positive integer value x such that there exists a non-degenerate triangle with side lengths ai, aj, and x
Finally, remove two elements ai and aj, and append x to the end of a
*/

/*
On the second test case, a is initially [998,244,353]
Erase a2=244 and a3=353, and append (244+353)-1 = 596 to the end of a. a is now [998,596];
Erase a1=998 and a2=596, and append (998+596)-1 = 1593 to the end of a. a is now [1593]

*/



int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);

        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        // If only one element, directly print it
        if (n == 1) {
            cout << vec[0] << endl;
            continue;
        }

        // Process the array
        while (vec.size() > 1) {
            int last = vec.back();   // Last element
            vec.pop_back();          // Remove last element

            int second_last = vec.back();  // New last element after pop
            vec.pop_back();          // Remove second last element

            // Append new computed value
            vec.push_back(last + second_last - 1);
        }

        // Print the final remaining element
        cout << vec[0] << endl;
    }

    return 0;
}
