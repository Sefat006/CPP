#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>> t;

    while(t--){
        string s;
        cin>> s;

        vector<int> pin;
        for (char c : s) {
            int val = c-'0';
            if( val == 0 ) val = 10;
            pin.push_back( val );
        }
        
        int second = 0;
        if( pin[0] == 1 ) second = 1;
        else second = abs(1-pin[0]) + 1;

        for (int i=0; i<3; i++) {
            int j=i+1;
            second += ( (abs(pin[i]-pin[j])) + 1);
        }

        cout<<second<<endl;

    }

    return 0;
}