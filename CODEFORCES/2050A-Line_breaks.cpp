#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>> t;

    while(t--){
        int n, m;
        cin>> n>>m;
        string s[n];

        int charCount = 0;
        int wordCount = 0;
        for( int i=0; i<n; i++){
            cin>> s[i];
        }
        for( int i=0; i<n; i++){    
            if(charCount+s[i].size() <= m){
                charCount += s[i].size();
                wordCount++;
            }
            else{
                break;
            }
        }   
        cout<<wordCount<<endl;
    }  
    
    return 0;
}