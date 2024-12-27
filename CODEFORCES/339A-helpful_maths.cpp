#include <bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    cin>> s;

    int n = s.length();
    for(int i=0; i<n-1; i=i+2)
    {
        for( int j=i+2; j<n; j=j+2){
            if( s[j] < s[i]){
                char temp = s[j];
                s[j] = s[i];
                s[i] = temp;
            }
        }
    }
    
    cout<< s<<endl;
    return 0;
}