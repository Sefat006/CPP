#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int t;
    char str1[100],str2[100];
    cin>> t;
    
    for(int i=0;i<=t;i++){
        cin>> str1;
        strcpy(str2, str1);
        strrev(str2);
        if(strcmp(str2, str1) == 0)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    
    }
    return 0;
}