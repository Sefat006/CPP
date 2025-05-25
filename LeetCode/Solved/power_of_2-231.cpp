#include <bits/stdc++.h>
using namespace std;


/*
    Given an integer n, return true if it is a power of two. Otherwise, return false.
    An integer n is a power of two, if there exists an integer x such that n == 2x.

    solution logic : 
    int size is : n^0 to n^31 and n^31 = -1;
    so we'll run a loop from x=0 to x=30;
    if any power of 2 matches to the n, return true;
    else return false;
*/

class Solution {
    public:
        bool isPowerOfTwo(int n) {
            for( int x=0; x<=30; x++){
                int ans = pow(2,x);

                if( ans == n){
                    return true;
                }
            }

            return false;
        }
    };