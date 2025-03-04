#include <bits/stdc++.h>
using namespace std;

/*
    this algorithm will count the number of digis
    it can also be use for reverse a number

    ex : 7798 ; output : 8977
*/
int digitNum ( int n)
{
    int count = 0;
    while ( n > 0 )
    {
        int num = n%10;
        count++;
        n = n/10;
    }
    return count;
}

int main()
{
    
    int n;
    cin>> n;
    // 1st approach for digit number
    /*
    int count = 0;
    while ( n > 0 )
    {
        int num = n%10;
        count++;
        n = n/10;
    }
    */
    

    cout<<"the number of digits n have is : "<< digitNum(n) <<endl;
    cout<<"or there are "<< digitNum(n) <<" digits in n" <<endl;

    return 0;
}