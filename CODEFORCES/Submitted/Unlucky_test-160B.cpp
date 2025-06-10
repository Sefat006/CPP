#include <bits/stdc++.h>
using namespace std;

/*
    Let us remind you that a ticket is lucky if the sum of digits in its first half matches the sum of digits in its second half.  We'll say that a ticket is definitely unlucky if each digit from the first half corresponds to some digit from the second half so that each digit from the first half is strictly less than the corresponding digit from the second one or each digit from the first half is strictly more than the corresponding digit from the second one.

    string = 2421
    we have to check  2=>2, 4>1;
*/

int main()
{
    int n; cin>> n;
    int x = 2*n;

    string str; cin>> str;
    
    string left, right;

    left = str.substr(0, n);
    right = str.substr( n, x);

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    bool greater = true, smaller = true;
    for (int i=0; i<n; i++) {
        if( left[i] >= right[i] ) {smaller = false;}
        if( left[i] <= right[i] ) {greater = false;}
    }

    cout << ((greater || smaller ) ? "YES" : "NO") << endl;
    


    return 0;
}