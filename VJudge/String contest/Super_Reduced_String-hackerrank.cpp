#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    string s;
    cin>> s;
    int n=s.size();

    int i, ok=1;
    while(ok){
        ok=0;
        n = s.size();
        for ( i=0; i<n-1; i++) {
            if(s[i]==s[i+1]){
                ok=1;
                s.erase(i,2);
                break;
            }
        }
    }

    if (s == "") s = "Empty String";
    cout << s << '\n';


    return 0;
}