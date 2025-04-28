#include <bits/stdc++.h>
using namespace std;

bool equal(int a, int b, int c){
    int total = a + b + c;
    if (total % 3 != 0) {
        return false;
    }
    int final = total / 3;
    
    if (final >= a && final >= b && final <= c) {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin>> t;

    while (t--) {
        int a,b,c;
        cin>> a>> b>> c;

        cout<< ( (equal(a,b,c)) ? "YES":"NO")<<endl;
    }
    return 0;
}