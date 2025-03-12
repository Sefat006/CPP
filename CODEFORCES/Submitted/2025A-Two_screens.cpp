#include<iostream>
#include<string>
using namespace std;


int main(){
    int q;
    cin>> q;

    while(q--){
        string s,t;
        cin>> s>>t;

        int count = 0;

//         This loop iterates as long as two conditions are met:

// Character Match: s[count] == t[count]: This checks if the characters at the current index count in both strings s and t are the same.
// Index Within Bounds: count < min(s.size(), t.size()): This ensures that the count index doesn't exceed the length of the shorter string.
        while(count < min(s.size(), t.size()) && s[count] == t[count])
            count++;

        if( count == 0){
            cout<< s.size() + t.size()<<endl;
        }else{
            int x = s.size() - count;
            int y = t.size() - count;
            cout<< count + 1 + x + y <<endl;
        }
    }

    return 0;
}