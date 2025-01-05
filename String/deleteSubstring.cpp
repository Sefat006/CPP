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
    int index = text.find(sub_string);

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