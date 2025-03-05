#include <bits/stdc++.h>
using namespace std;

/*
 if Bob came up with the string a
="abac", then all the substrings of length 2
 of the string a
 are: "ab", "ba", "ac". Therefore, the string b
="abbaac".

You are given the string b
. Help Alice to guess the string a
 that Bob came up with. It is guaranteed that b
 was built according to the algorithm given above. It can be proved that the answer to the problem is unique.

*/

int main()
{
    int t;
    cin>> t;

    while ( t-- )
    {
        string b;
        cin>> b;

        string a;
        a = b[0];
        
        for( int i=1; i<b.size(); i=i+2)
        {
            a = a + b[i];
        }

        cout<<a<<endl;
    }

    return 0;
}