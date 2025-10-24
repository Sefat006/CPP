#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;

    while (t--)
    {
        string s; cin>> s;
        int n = s.size();
        int ones = count(s.begin(), s.end(), '1');
        int zeros = n - ones;

        int i;
        for(i=0; i<n; i++){
            if(s[i] == '0'){ 
                if(ones > 0)
                    ones--;
                else
                    break;
            }
            else{ // s[i] == '1'
                if(zeros > 0)
                    zeros--;
                else
                    break;
            }
        }

        cout << n-i << endl;


    }
    

    return 0;
}