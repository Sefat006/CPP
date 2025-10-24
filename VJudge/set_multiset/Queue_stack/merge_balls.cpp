#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    stack<int> st;

    while(n--){
        int x;
        cin>>x;
        st.push(x);
        while(st.size()>1){
            int x_top=st.top();
            st.pop();
            int y_top=st.top();
            st.pop();
            if(x_top!=y_top){
                st.push(y_top);
                st.push(x_top);
                break;
            }
            else{
                st.push(x_top+1);
            }
        }
    }
    cout<<st.size()<<endl;


    return 0;
}