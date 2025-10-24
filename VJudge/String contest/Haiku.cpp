#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);

int vowel(string &s){
    int count = 0;
    for( auto c:s){
        if( c == 'a' || c=='e' || c=='i' || c=='o' || c=='u'){
            count++;
        }
    }

    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    vector<string> vec(3);
    vector<int> v;
    int first=0, second=0, third=0;
    for (int i=0; i<3; i++) {
        getline(cin, vec[i]);
        if(i == 0){
            first = vowel(vec[0]);
        }else if( i==1){
            second = vowel(vec[1]);
        }else{
            third = vowel(vec[2]);
        }
    }

    if( first == 5 && second==7 && third==5){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }


    return 0;
}