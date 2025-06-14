#include <bits/stdc++.h>
using namespace std;

void increaseRating(string s, int n){
    int k=n/2;
    int start;
    bool zero = true;
    for(int i=1; i<= k+1;){
        if( s[i] == '0') {
            i++;
        }
        else {
            start = i;
            zero = false;
            break;
        }
    }

    string first = s.substr(0, start);
    string second = s.substr(start);

    if (first.empty() || second.empty()) {
        cout << -1 << endl;
        return;
    }

    long long numFirst = stoll(first);
    long long numSecond = stoll(second);

    if( zero == false && numSecond > numFirst){
        cout<< numFirst << " "<<numSecond<<endl;
    }else{
        cout<< -1 <<endl;
    }
}

int main()
{
    int t; cin>> t;

    while (t--)
    {
        string s; cin>> s;
        int n = s.length();
        // cout<<n<<endl;
        increaseRating(s, n);
    }
    

    return 0;
}