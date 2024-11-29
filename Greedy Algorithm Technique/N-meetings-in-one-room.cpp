#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    int maxMeetings(int start[], int end[], int n)
    {
        // pair< int[starting time], int[ending time]>
        vector<pair<int, int>> v;

        for( int i=0; i<n; i++){
            // pair <data_type1, data_type2> Pair_name (value1, value2);
            pair<int, int> p = make_pair(start[i], end[i]);
            v.push_back(p);
        }
    }
};

int main(){

}