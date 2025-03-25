#include <bits/stdc++.h>
using namespace std;

bool UpperCase(string s, int n){
    int upper = 0, lower = 0;

    upper = count_if(s.begin(), s.end(), ::isupper );
    lower = count_if(s.begin()+1, s.end(), ::islower);

    if( upper == n || lower == (n-1)){
        return false;
    }
    return true;
}

int main()
{
    string s;
    cin>> s;
    int n = s.size();
    string str;

    if(UpperCase(s, n) == false){
        for(char ch : s){
            toupper(ch);
        }
    }
    
    return 0;
}