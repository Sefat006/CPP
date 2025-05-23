#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int n = nums.size();
        vector<int> sum(n);

        sum[0] = nums[0];

        for(int i=1; i<n; i++){
            sum[i] = nums[i] - sum[i-1];
        }
        
        return sum;
    }
};