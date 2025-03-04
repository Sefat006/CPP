#include <bits/stdc++.h>
using namespace std;



int main()
{
    string text, sub_string;

    cout<<"enter the text : ";
    getline(cin, text);

    cout<<"enter the sub string you want to delete: ";
    getline(cin, sub_string);

    // delete sub string
    int index = text.find(sub_string); // finds the index of the substring on string(text);

    // if the substring is not present on string
    // if the index(substring search) runs from start of the string to nth position(npos) of the string
    // means the sun string is not found thats why it has run from starting to ending of the string
    if( index == string::npos) 
    {
       cout<<"NULL"<<endl;
    }
    else{
        while( index != string::npos){
            text.erase(index, sub_string.length());
            index = text.find(sub_string, index);
            cout<<"modified text : "<< text<<endl;
        }
    }

    
    return 0;
}