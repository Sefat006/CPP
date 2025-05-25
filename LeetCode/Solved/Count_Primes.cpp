#include<bits/stdc++.h>
using namespace std;

// Given an integer n, return the number of prime numbers that are strictly less than n.
/*
    Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/

class Solution {
private:

public:
    int countPrimes(int n)
    {
        int count = 0;
        vector<bool> prime(n+1, true);

        prime[0] = prime[1] = false;

        for(int i=2; i<n; i++)
        {
            if(prime[i]){
                count++;
                for(int j=2*i; j<n; j=j+i)
                {
                    prime[j] = 0;
                }
            }
        }
        return count;
    }
};

int main()
{
    int n;
    cin>> n;
    Solution adj1;
    cout<<adj1.countPrimes(n)<<endl;

    return 0;

}
