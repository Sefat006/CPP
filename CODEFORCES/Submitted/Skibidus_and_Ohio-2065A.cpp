#include <iostream>
#include <string>
using namespace std;

/*
    IF ANY character has duplicate,
    then the output will be 1, else, print the size of the string
*/


int main() {
    int t;
    cin>> t;

    while (t--)
    {
        string s;
        cin >> s;
        int x = 0;
        for( int i=0;i<s.size();i++){
            if( s[i]==s[i+1]){
                x=1;
                break;
            }
        }
            if(x){
                cout<<1<<endl;
            }else{
                cout<<s.size()<<endl;
            }
        
        
    }        

    return 0;
}
