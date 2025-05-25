#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long t; cin>> t;

    while (t--)
    {
        long long n,q; cin>> n>> q;
        
        vector<long long> arr(n);
        for(long long i=0; i<n; i++){
            cin>> arr[i];
        }


        while (q--)
        {
            long long l,r,k;
            /*  
                in subarray
                l=start, r=end, k=replace value
            */
            cin>> l>>r>>k;
            // new vector for replace subarray
            // else it will change the main array for all test case
            vector<long long> r_arr(arr);

            r_arr.erase(r_arr.begin()+(l-1), r_arr.begin()+r);
            r_arr.insert(r_arr.begin()+(l-1), r-l+1, k);
            long long sum = accumulate(r_arr.begin(), r_arr.end(), 0);
            // cout<<sum<<endl;

            cout << ((sum % 2 != 0) ? "YES" : "NO") << endl;

        }

        
    }
    
    return 0;
}