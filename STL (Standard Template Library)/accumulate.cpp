#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        /*
        sums the starting to ending element of an array;

        int sum = accumulate(start_iterator, end_iterator, initial_value);
        initial_value: int count = 0; and then count++;
        */
        int total = accumulate(nums.begin(), nums.end(), 0);

        int left = 0;

        for( int i= 0; i<nums.size(); i++){
            // i++ hole total theke [i]+[i-1] minus korle right side er sum ashe
            int right = total - left - nums[i];
            if( left == right ){
                return i;
            }
            left = left + nums[i];
        }

        return -1;
    }
};