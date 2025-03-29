#include <bits/stdc++.h>
using namespace std;

/*
In the first sample, Anton won 6 games, while Danik — only 1. Hence, the answer is "Anton".

In the second sample, Anton won 3 games and Danik won 4 games, so the answer is "Danik".

In the third sample, both Anton and Danik won 3 games and the answer is "Friendship".
*/


int main()
{
    int n;
    cin>> n;

    string s;
    cin>> s;

    unordered_map<char, int> freq;

    for(int i=0; i<n; i++){
        freq[s[i]]++;
    }
    char A = 'A', D = 'D';
    
    if( freq[A] > freq[D]){
        cout<< "Anton"<<endl;
    }else if( freq[A] < freq[D] ) {
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }

    return 0;
}