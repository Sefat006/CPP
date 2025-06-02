#include <bits/stdc++.h>
using namespace std;


/*
    * this program prints # on every odd line (bcz the count starts from 1)
    * and on every 'odd' even line (even line that counts odd, example 1st even line = 1(odd), 2nd even line = 2(even) ). it will print # at last and rest dot
    *example
    n = 9, m = 9;

    #########
    ........#
    #########
    #........
    #########
    ........#
    #########
    #........
    #########

*/

int main()
{
    int n,m;
    cin>> n>>m;

    int row = 1;
    int dot_odd_count = 1;

    while (row <= n)
    {
        int col = 1;
        
        if(row%2 == 1){
            while(col <= m){
                cout<<"#";
                col++;
            }cout<<endl;

        }else{

            if(dot_odd_count%2 == 1){

                while(col < m){
                cout<<".";
                col++;
                }cout<<"#"<<endl;

                dot_odd_count++;
            }else{

                for(int i=1; i<=m; i++){
                    if( i==1 ) cout<<"#";
                    else cout<<".";
                }cout<<endl;

                dot_odd_count++;
            }
        }

        row++;
    }
    

    return 0;
}