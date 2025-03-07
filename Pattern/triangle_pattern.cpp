#include <bits/stdc++.h>
using namespace std;

/*
    
    i=1   * 
    i=2   **
    i=3   ***
    i=4   **** 
    
    col will depend on the row number

*/



int main()
{
    int n;
    cin>> n;

    int row = 1;
    
    while ( row <= n)
    {
        /* code */
        int col = 1;
        while ( col <= row)
        {
            /* code */
            cout<< row;
            col++;
        }cout<<endl;
        row++;
    }
    

    return 0;
}