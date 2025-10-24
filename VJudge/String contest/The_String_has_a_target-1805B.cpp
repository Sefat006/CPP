#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        int pos = n-1;
        char mini = s[pos];

        for (int i=n-2; i>=0; i--) {
            if( s[i] < mini){
                pos = i;
                mini = s[pos];
            }
        }

        int index=0;
        for(index; index<pos; index++){
            if(s[index] > s[pos]) break;
        }

        char c = s[pos];
        s.erase(s.begin()+pos);
        s.insert(s.begin()+index, c);

        cout<<s<<endl;

    }


    return 0;
}