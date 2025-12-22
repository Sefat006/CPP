#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    string s;
    while (getline(cin, s))
    {
        if(s == "#"){
            return 0;
        }

        istringstream iss(s);
        set<string> st;
        string word;
        while( iss >> word){
            st.insert(word);
        }

        cout<< st.size()<<endl;
    }


    return 0;
}