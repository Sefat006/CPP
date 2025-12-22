#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);

// https://codeforces.com/problemset/problem/1335/C

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;
    while (t--)
    {
        /* code */
        int n; cin>>n;
        vector<int > vec(n+1);
        for (int i=0; i<n; i++) {
            int x; cin>>x;
            vec[x]++; // this will store the count of appearances of number in the index
            // example : x = array{1,1,2,3,3,3} = vec[0,2,1,3];
            // index-0 -> 0times, index-1-> 2times, index-2->1times, index-3->3times
        }

        // if(n==1){
        //     cout<<0<<endl;
        //     continue;
        // }

        //count the maximum appeared number, in the example above, its 3(3 times);
        int mx = *max_element(vec.begin(), vec.end());

        //count the unique number(count how many index got 0)
        int unique = n + 1 - count(vec.begin(), vec.end(), 0);

        int min_mx_appeared_num_size_that_is_eql_with_min_unique_num = min( mx-1, unique);
        int min_unique_num_that_will_eql_to_mx_appeared_num = min(unique-1, mx);


        //ex: arr{4,2,4,1,4,3,4} = vec{0,1,1,1,4}
        // mx = 4, unique = 3;
        // ans = {1,2,3} {4,4,4};
        cout<<max ( min_unique_num_that_will_eql_to_mx_appeared_num, min_mx_appeared_num_size_that_is_eql_with_min_unique_num)<<endl;
    }
    


    return 0;
}