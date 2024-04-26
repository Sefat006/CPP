#include<iostream>
#include<string>

using namespace std;

int main(){
    string str1,str2;
    int i;
    cin>> str1>> str2;

    for(i=0; i<str1.size(); i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);
    }
    
    if(str1==str2){
        cout<<"0"<<endl;
    }
    else{
        for(i=0; i<str1.size(); i++){
            if(str1[i]<str2[i]){
                cout<<"-1"<<endl;
                break;
            }
            if(str1[i]>str2[i]){
                cout<<"1"<<endl;
                break;
            }
        }
    }


    return 0;



}