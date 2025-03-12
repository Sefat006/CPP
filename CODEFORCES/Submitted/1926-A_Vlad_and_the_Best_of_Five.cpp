//A Vlad and the Best of Five

#include<iostream>
#include<string>
using namespace std;


int main(){
    int t;
    cin>> t;

    
    for ( int i = 0; i< t; i++){
        string s;
        cin>> s;

        int A = 0, B = 0;


        for( int i = 0; i<s.size(); i++){
            if( s[i] == 'A'){
                A++;
            }else{
                B++;
            }
        }

        if( A > B){
        cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }

    

    return 0;
}