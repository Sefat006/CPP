#include <bits/stdc++.h>
using namespace std;

int findNumbers(vector<int>& nums) {
    int count = 0;
    for (int i=0; i<nums.size(); i++) {
        int n = nums[i];
        int cnt=0;
        while( n > 0 ){
            n = n/10;
            cnt++;
        }

        if( cnt%2 == 0) count++;
    }
    return count;
}

int main()
{
    int n; cin>>n;

    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        cin>>nums[i];
    }
    int ans = findNumbers(nums);
    cout<<ans<<endl;

    return 0;
}