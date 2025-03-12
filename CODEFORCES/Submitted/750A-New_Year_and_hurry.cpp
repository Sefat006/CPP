#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>> n>> k;

    int time_available = 240-k;
    int total_time_for_problem = 0;
    int number_of_problem_solved = 0;


    for(int i=1; i<=n; i++){
        total_time_for_problem += 5*i;
        if( total_time_for_problem > time_available){
            break;
        }
        number_of_problem_solved++; 
    }

    cout<< number_of_problem_solved<<endl;


    return 0;
}