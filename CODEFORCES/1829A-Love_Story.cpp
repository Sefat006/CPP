#include<iostream>
using namespace std;



int main()
{
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>> s;

        string s1 = "codeforces";
        int count = 0;
        for(int i = 0; i<10; i++){
            if( s[i] != s1[i]){
                count++;
            }
        }
        cout<<count<<endl;

    }

    return 0;
}