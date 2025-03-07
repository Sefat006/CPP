#include <bits/stdc++.h>
using namespace std;

// this is a n*n pattern;
/*
    * * * *
    * * * *
    * * * *
    * * * *
*/

int main()
{   
    // n = row.size();
    int n; cin>> n;

    int i = 1; // i = row;

    while ( i <= n) { // 1 to nth index;

        int j = 1; // column 
        while ( j <= n)
        {
            // printing a star in 1st column
            cout<< "*";

            // forwarding to the next column one by one till nth;
            j++; 

        } // nth column star done? 
        cout<<endl; // hit enter, new line(row)

        // forwarding to next row;
        i++; 
    }


    return 0;
}