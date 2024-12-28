#include <bits/stdc++.h>
using namespace std;



int main()
{
    // replace substring
    string text, sub_string, replace_string;

    cout<<"Enter the text : ";
    getline(cin, text);

    cout<<"Enter the sub string: ";
    getline(cin, sub_string);

    cout<<"Enter the replacement string : ";
    getline(cin, replace_string);

    // find index(pos) of the substring in text
    int pos = text.find(sub_string);

    // string::npos => the loop will continue until the nth position of the string
    while( pos != string::npos){
        text.replace(pos, sub_string.length(), replace_string);
        // defining the length of the replaced string
        pos = text.find(sub_string, pos + replace_string.length());
    }

    cout<<"modified text : "<<text<<endl;

    return 0;
}