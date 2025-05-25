#include <bits/stdc++.h>
using namespace std;



bool isPalindrome(string s) {
        vector<string> vec;
        vec.push_back(s);
        
        for(string &character : vec){
            for( char &ch : character){
                ch = tolower(ch);
            }
            //remove space from string
            character.erase( remove(character.begin(), character.end(), ' '), character.end());
            character.erase(remove_if(character.begin(), character.end(), [](char c) {
            return !isalnum(c);
        }), character.end());
        }

        // copy vector string to a string
        // reverse vector string
        string cleaned_string = vec[0];
        string backward_string = cleaned_string;
        reverse(backward_string.begin(), backward_string.end());

        if( cleaned_string == backward_string){
            cout<< cleaned_string <<"\n"<<backward_string<<endl;
            return true;
        }

        return false;
    }

int main(){
    string s;
    getline(cin, s);

    if(isPalindrome(s)){
        cout<<isPalindrome(s)<<endl;
    }else{
        cout<<0<<endl;
    }

    return 0;
}