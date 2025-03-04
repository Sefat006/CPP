#include <bits/stdc++.h>
using namespace std;

/*
    this algorithm will count the number of digis
    it can also be use for reverse a number

    ex : 7798 ; output : 8977
*/
int digitNum ( int n)
{
    //  int ( log10(n) + 1) = digits number
    int count = (int)(log10(n) + 1);
    return count;
}

int main()
{
    
    int n;
    cin>> n;
    // 2nd approach for digit number
    
    

    cout<<"the number of digits n have is : "<< digitNum(n) <<endl;
    cout<<"or there are "<< digitNum(n) <<" digits in n" <<endl;


    return 0;
}