#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int> left_sum(n);
        vector<int> right_sum(n);

        left_sum[0] = nums[0];
        right_sum[n-1] = nums[n-1];

        for(int i=1; i<n; i++){
            left_sum[i] = nums[i]+left_sum[i-1];
        }
        for(int i=n-2; i>=0; i--){
            right_sum[i] = nums[i]+right_sum[i+1];
        }

        for(int i=0; i<n; i++){
            if( left_sum[i] == right_sum[i]){
                return i;
            }
        }

        return -1;
    }
};

