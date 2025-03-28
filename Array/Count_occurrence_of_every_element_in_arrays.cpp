

//count occurance of every element in an array and the product of elements

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{   
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a, a + n);

        a[0] += 1;

        int product = 1;
        for(int i=0; i<n; i++){
            product *= a[i];
        }

        cout<<product;
    }

    return 0;
}