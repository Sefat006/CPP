#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        int n,k; cin>>n>>k;
        string s;
        cin>> s;

        unordered_map<long long, long long> freq;
        for(long long i = 0; i < n; i++) {
            long long digit = s[i] - '0';
            freq[digit]++;
        }

        if(n==2 && freq.size()==2){
            cout<<"NO"<<endl;
            continue;;
        }
        int count = 0;
        for(long long i=0; i<n/2; i++){
            int zero = 0, one = 0;
            for(long long j=0; j<=i; j++){
                if(s[j] == '0') zero++;
                else one++;
            }
            
            char left = s[i];
            char right = s[n-i-1];

            if( (right == left) && abs(zero-one) == 1 ){
                count++;
            }else if( zero == one ){
                break;
            }
        }

        if( count == k ){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    

    return 0;
}