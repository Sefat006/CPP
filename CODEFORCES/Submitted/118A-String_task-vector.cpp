#include <bits/stdc++.h>
using namespace std;



int main()
{
    vector<char> vec = {'a', 'o', 'y', 'e', 'u', 'i'};
    string x;
    cin>> x;
    vector<char> str;
    

    for( char c : x){
        c = tolower(c);

        // this find filter the vec char with the input char
        // and delete them;
        if(find(vec.begin(), vec.end(), c) == vec.end())
        {
            str.push_back('.');
            str.push_back(c);
        }
    }

    for( char c : str){
        tolower(c);
        cout<<c;
    }
    cout<<endl;



    return 0;
}