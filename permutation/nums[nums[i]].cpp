#include <bits/stdc++.h>
using namespace std;

/*
    Build Array From Permutation
    Input: nums = [0,2,1,5,3,4]
    Output:       [0,1,2,4,5,3]

    let's see in 5,,,5 is placed in index 4, but if sort the nums.. then it will be 0,1,2,3,4,5... and in 5th place there is 4[last element, where index=5], 
    
    let's see again,, nums[] e,, 3 er jaygay 5 boshe ache, tai,, 3 er jaygay output 5 asce
*/


    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for (int i=0; i<nums.size(); i++) {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }