#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t; cin>> t;

    while (t--)
    {
        string s;
        cin>> s;
        int a,b;
        int num = stoi(s);
        int root = sqrt(num);
        if( (root*root) != num ){
            cout<<-1<<endl;
            continue;
        }else{
            if( root%2 == 0 ){
                a = root/2;
                b = a;
                cout<<a<<" "<<b<<endl;
            }else{
                a = root/2;
                b = a+1;
                cout<<a<<" "<<b<<endl;
            }
        }
    }
    

    return 0;
}