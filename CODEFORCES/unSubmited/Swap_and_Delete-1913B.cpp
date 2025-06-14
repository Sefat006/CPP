#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t; cin>> t;

    while (t--)
    {
        string s; cin>> s;
        vector<string> str;
        unordered_map<string, int> count;
        str.push_back(s);
        
        for (int i=0; i<str.size(); i++) {
            count[str[i]]++;
        }

        if( count["0"] == count["1"] ) {
            cout<<0<<endl;
            continue;
        }
        if( str.size()%2==1 && abs(count["0"]-count["1"])==1){
            cout<< 1<<endl;
            continue;
        }
        int cnt = 0;
        for (int i=1; i<str.size(); i=i+2) {
            if( str[i] == str[i-1]) {
                cnt++;
                str.erase(); i--;
            }
        }



    }
    

    return 0;
}