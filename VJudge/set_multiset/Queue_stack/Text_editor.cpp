#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    string s;
    cin>>s;

    stack<char> l,r;
    for (int i=0; i<s.size(); i++) {
        if(s[i] == 'L'){
            if(l.size()) {
                r.push(l.top());
                l.pop();
            }
        }
        else if(s[i] == 'R'){
            if(r.size()){
                l.push(r.top());
                r.pop();
            }
        }else{
            l.push(s[i]);
        }
    }

    while (l.size())
    {
        /* code */
        r.push(l.top());
        l.pop();
    }

    while(r.size()){
        cout<<r.top();
        r.pop();
    }cout<<endl;
    

    return 0;
}