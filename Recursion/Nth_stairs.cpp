
// count ways to reach the N-th stairs
// codeStudio

#include<iostream>
using namespace std;

int solution(long long nStairs){

    // base case
    if( nStairs < 0)
        return 0;

    if( nStairs == 0)
        return 1;

    int ans = solution( nStairs-1 ) + solution( nStairs-2 );

    return 0;
    
}


int main()
{
    int n;
    cin>> n;

    cout<< solution(n)<<endl;

    return 0;
}