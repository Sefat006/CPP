#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,x=0;
    cin>> n;
    string s;
    while(n--){
        cin>> s;
        if(s[1] == '+')//if 2nd element + thake tahole x++ hobe
        {
            x++;
        }else{
            x--;//else 2nd element + na thakle x-- hobe
        }
    }
    cout<< x << endl;
    getchar();
}
