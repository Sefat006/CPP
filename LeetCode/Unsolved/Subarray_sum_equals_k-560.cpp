#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0, count=0;
        for(int i=0; i<n-1; i++){
            sum = nums[i]+nums[i+1];
            if( sum == k){
                count++;
            }
        }
        
        for(int i=0; i<n; i++){
            if( nums[i] == k){
                count++;
            }
        }

        return count;
    }
};