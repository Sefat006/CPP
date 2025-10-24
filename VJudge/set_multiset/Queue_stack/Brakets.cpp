#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);

//this will only print yes if the stack became empty
// and only stack will pop, only if the bracket found their other one together

// {{[[(())]]}} when in the middle, it found (), it will start to pop,

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    while(n--){
        string s;
        cin>>s;
        stack<char> st;
        bool ans = true;

        for(auto x:s){
            if(x=='(' || x=='{' || x=='['){
                st.push(x);
            }else{
                if(st.empty()){
                    ans = false;
                    break;
                }

                char c = st.top();
                if( c == '('){
                    if(x != ')') ans = false;
                }

                if(c == '{') {
                    if( x != '}') ans = false;
                }

                if( c == '['){
                    if( x != ']') ans = false;
                }

                st.pop();
            }
        }

        if(st.size()) ans = false;
        if( ans ) cout<<"YES\n";
        else cout<<"NO\n";
    }


    return 0;
}