#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);


    // code
    int t;
    cin>>t;

    while (t--)
    {
        int n; cin>>n;
        queue<int> q;
        if( n==1 ){
            int x;
            cin>>x;
            q.push(x);
        }else if( n==2 ){
            if(!(q.empty())){
                q.pop();
            }
        }else{
            if(!(q.empty())){
                cout<<q.front()<<endl;
            }else{
                cout<<"Empty!\n";
            }
        }
    }
    


    return 0;
}