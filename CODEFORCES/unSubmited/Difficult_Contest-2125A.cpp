#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        
        if(s.find('FFT') == string::npos || s.find('NTT') == string::npos){
            cout<< s<<endl;
            continue;
        }else{
            for (int i=0; i<s.size(); i++) {
            if( s[i+1] > s[i]){
                swap(s[i+1], s[i]);
            }
        }
        }

        

        cout << s << endl;
    }

    return 0;
}
