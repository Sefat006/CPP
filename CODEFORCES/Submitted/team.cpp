#include<iostream>
using namespace std;

int main()
{
    int n,a,b,c,sum,total=0;
    cin>> n;
    for(int i=1; i<=n; i++){
      cin>> a>> b>> c;
      sum = a+b+c;
        if(sum >= 2){
            total = total + 1;
        }
    }
    cout<<total;
    return 0;
}
