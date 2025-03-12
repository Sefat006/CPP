#include<bits/stdc++.h>
using namespace std;

/*
    int countBRange(string s) : It would create a copy of the entire string, which is inefficient for large strings.
*/

/* test case:
    In the first test case of the example for the strip "WBBWBW", the minimum length of the segment to be repainted white is 4. It is necessary to repaint to white the segment from the 2nd to the 5th cell (the cells are numbered from 1 from left to right).
*/
int black(string &s, int n)
{
    vector<int> str;
    int sum = 0;
    for( int i=0; i<n; i++)
    {
        if( s[i] == 'B' )
        {
            str.push_back(i); // saves only the index numbers where B is appeared;
        }
    }
        if (str.empty())
        {return 0;} // No 'B' found, return 0
        else{   // from last index number to first index number + 1;
            sum = str.back() - str.front() + 1;
        }
    

    return sum;
}

int main()
{
    int t;
    cin>> t;

    while( t-- )
    {
        int n; cin >> n; // length of string
        
        string s; cin>> s;

        cout<<black(s,n)<<endl;
    }

    return 0;
}