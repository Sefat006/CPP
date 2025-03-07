#include <bits/stdc++.h>
using namespace std;

// this is a n*n pattern;
/*
         *      for 1st row, 3 space
       * *      if n = 4; row = 1st row
     * * *      then, space = n - row
    * * * *                 = 4 - 1 = 3 space for 1st row
*/

int main()
{

    int n;
    cin>> n;
    
    int row = 1;

    while( row <= n)
    {
        // space print
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space--;
        }

        //star print
        int col = 1;
        while (( col <= row))
        {
            cout<<"*";
            col++;
        }cout<<endl;
        row++;
        
    }

    return 0;
}