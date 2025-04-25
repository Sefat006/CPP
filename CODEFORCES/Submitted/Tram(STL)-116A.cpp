#include <bits/stdc++.h>
using namespace std;

/*
The first line contains a single number n (2 ≤ n ≤ 1000) — the number of the tram's stops.

Then n lines follow, each contains two integers ai and bi (0 ≤ ai, bi ≤ 1000) — the number of passengers that exits the tram at the i-th stop, and the number of passengers that enter the tram at the i-th stop. The stops are given from the first to the last stop in the order of tram's movement.

Print a single integer denoting the minimum possible capacity of the tram
*/

int main()
{
    int n; cin>> n;

    vector< pair<int,int> > busStops(n); 
    for(int i=0; i<n; i++){
        cin>> busStops[i].first >> busStops[i].second;
    }

    int currentPassenger = 0;
    int maxPassengerNumber = 0;
    for(const auto& stop : busStops){
        currentPassenger = currentPassenger - stop.first;
        currentPassenger = currentPassenger + stop.second;

        maxPassengerNumber = max(maxPassengerNumber, currentPassenger);
    }

    cout<< maxPassengerNumber<<endl;

    

    return 0;
}