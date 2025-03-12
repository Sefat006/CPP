#include <bits/stdc++.h>
using namespace std;

// problem 110A
// Nearly lucky Number
int main()
{
    long long n;
    cin>>n;
    
    string s;
    //convert into string
    s = to_string(n);
    int count = 0;
    for(char c : s)
    {
        if( c == '4' || c == '7')
        {
            count++;
        }
    }
    
    string str_count = to_string(count);

    for(char c : str_count)
    {
        if( c != '4' && c != '7')
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}