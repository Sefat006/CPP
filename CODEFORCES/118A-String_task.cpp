#include <bits/stdc++.h>
using namespace std;



int main()
{
    string str1,str2 = "aoyeui";

    cin>> str1;
    string result;
    for( char c : str1){
        c = tolower(c);
        if(find(str2.begin(), str2.end(), c) == str2.end()){
            result = result + '.';
            result = result + c;
        } 
    }

    cout<<result<<endl;

    

    return 0;
}