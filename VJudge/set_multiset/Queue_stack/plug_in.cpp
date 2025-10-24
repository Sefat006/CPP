#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    string s;
    cin>>s;
    stack<char> st;
    for (int i=s.size()-1; i>=0; i--) {
        if(st.empty()){
            st.push(s[i]);
        }else{
            if(st.top() == s[i]){
                st.pop();
            }else{
                st.push(s[i]);
            }
        }
    }

    
    
    while (!st.empty())
    {
        cout<<st.top();
        st.pop();
    }cout<<"\n";
    


    return 0;
}