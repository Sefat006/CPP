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

    for(int i=0; i<s.size()-1;){
        if(s[i]==s[i+1]){
            s.erase(i,2);
            if( i > 0){
                i--;
            }
        }else i++;
    }

    if(s.empty()) cout<<"Empty String\n";
    else cout<<s<<endl;


    return 0;
}