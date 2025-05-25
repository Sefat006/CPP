#include <bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin>> t;

    while (t--)
    {
        long long n; cin>>n;
        long long a[n];
        for(int i=0; i<n; i++){
            cin>> a[i];
        }
        map<long long, long long> freq;
        for(int i=0; i<n; i++){
            freq[a[i]]++;
        }


        if(freq.size() >= 3){
            cout<<"NO"<<endl;
        }else if(freq.size() == 1){
            cout<<"YES"<<endl;
        }else{
            long long a=0, b=0, count=0;
            for( auto &p : freq){
                if( count == 0){
                    a = p.second;
                    count++;
                }else{
                    b = p.second;
                }
            }
            if(abs(a-b) <= 1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }

    }
    
    return 0;
}