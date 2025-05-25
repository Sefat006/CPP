#include <bits/stdc++.h>
using namespace std;



class NumArray {
    vector<int> prefix_sum;
public:
    NumArray(vector<int>& nums) {

        prefix_sum.resize(nums.size());
        prefix_sum[0] = nums[0];

        for(int i=1;i<nums.size(); i++){
            prefix_sum[i] = nums[i] + prefix_sum[i-1];
        }

    }
    
    int sumRange(int left, int right) {
        int l = left, r = right;

        return (prefix_sum[r]+prefix_sum[l-1]);

    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */