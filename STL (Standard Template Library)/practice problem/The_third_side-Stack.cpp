#include <bits/stdc++.h>
using namespace std;


/*
    codeforces problem 2074B-the third side 
    solving using Stl , stack

*/

/*
On the second test case, array is initially [998,244,353]
Erase a2=244 and a3=353, and append (244+353)-1 = 596 to the end of a. a is now [998,596];
Erase a1=998 and a2=596, and append (998+596)-1 = 1593 to the end of a. a is now [1593]

*/


int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        stack<int> st;  // Using a stack instead of a vector

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            st.push(x);  // Push elements into the stack
        }

        while (st.size() > 1) {
            int last = st.top(); 
            st.pop();  // Remove last element

            int second_last = st.top();
            st.pop();  // Remove second last element

            int sum = last + second_last - 1;  // Calculate new element

            st.push(sum);  // Push new element back
        }

        cout << st.top() << endl;  // The last remaining element is the answer
    }

    return 0;
}
