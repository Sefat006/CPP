#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long t; cin>>t;
    while(t--){
        long long n,p; cin>>n>>p;
        long long arr[n], brr[n];
        for (long long i=0; i<n; i++) {
            cin>>arr[i];
        }

        long long ans = p;

        vector<pair<long long,long long>>vec;
        for (long long i=0; i<n; i++) {
            cin>>brr[i] ;
            vec.push_back( { min(p, brr[i]), arr[i] } );
        }

        sort(vec.begin(), vec.end());

        long long personLeft = n-1; // cz pak will reach to least 1 person;
        for (long long i=0; i<n-1; i++) {
            ans = ans + (min(vec[i].second, personLeft))*vec[i].first;
            personLeft = personLeft - min(personLeft, vec[i].second);
        }
        cout<<ans<<endl;
    }

    return 0;
}