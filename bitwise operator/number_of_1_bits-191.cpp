#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int hammingWeight(int n) { 
        int count = 0;

        while( n!=0 ){
            if( n&1 ){ // check 1+1=1, if 1 then count++;
                count++;
            }
            n = n>>1; // then remove the last element;
        }

        return count;
    }
};