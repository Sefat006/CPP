#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long t; cin>> t;

    while(t--){
        long long n, k; cin>> n>> k;

        string s; cin>> s;
        
        map<char, long long> mp;
        for(char ch : s){
            mp[ch]++;
        }

        vector<pair<char, long long>> vecFreq(mp.begin(), mp.end());
        sort(vecFreq.begin(), vecFreq.end(), [](pair<char, long long> &a, pair<char,long long> &b){
            return a.second > b.second;
        });
        
        string storedString;
        for (auto &it : vecFreq){
            storedString += string(it.second, it.first);
        }

        storedString.erase( n-k );
        long long len = storedString.size();

        map<char, long long> freq;
        for (long long i=0; i<len; i++) {
            freq[storedString[i]]++;
        }

        
        long long oddCount = 0;
        for(auto it : freq){
            if( it.second % 2 != 0 ) oddCount++;
        }

        if( (len%2 == 0 && oddCount==0) || ( len%2 == 1 && oddCount == 1 )){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }

    return 0;
}