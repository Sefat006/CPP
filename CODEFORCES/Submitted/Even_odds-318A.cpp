#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long n, k;
    cin >> n>> k;
    
    long long odd_section = (n+1)/2; // if n odd
    long long even_section = n/2; // if n even

    // 1st half odd, 2nd half even
    long long odd_k, even_k;
    if( k <= odd_section ){
        odd_k = (2*k)-1;
        cout<<odd_k<<endl;
    }else if( k > odd_section ){
        even_k = 2*(k-odd_section); 
        cout<<even_k<<endl;
    }

    return 0;
}



