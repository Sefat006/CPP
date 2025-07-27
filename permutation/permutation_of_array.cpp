#include <bits/stdc++.h>
using namespace std;

/*
    a string 'abc' is given,the permutation of 'abc'
    permutation of 'abc' is: abc acb bac bca cab cba

    the number of permutation will be n!( factorial of n );
    n=the length of string or array,
    if n=3, n!= 1*2*3 = 6;
*/

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    //base case
    if( index >= nums.size()){
        ans.push_back(nums);
        return;
    }

    //index = 0;
    for (int j=index; j<nums.size(); j++) {
        swap(nums[index], nums[j]);
        solve(nums, ans, index+1);
        //backtrack
        swap(nums[index], nums[j]);
    }
}


vector< vector<int>> permute(vector<int> & nums){
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);

    return ans;
}
