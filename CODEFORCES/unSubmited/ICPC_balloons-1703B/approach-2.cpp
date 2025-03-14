#include <bits/stdc++.h>
using namespace std;

int balloon(string str)
{
    map<char,bool> freq;
    int count = 0;

        for(char ch : str)
        {
            // If this is the first time solving this problem
            if(freq[ch] == true){
                count++; // 1 balloon for subsequent solvers
            }
            else{
                count = count + 2; // 2 balloons for the first solver
                freq[ch] = true;
            }
        }
    return count;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string str;
        cin>> str;

        int ans = balloon(str);
        cout<< ans<<endl;
    }

    return 0;
}