#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while (t--)
    {
        int n, k; cin>>n>>k;

        string s; cin>>s;
        sort(s.begin(), s.end());

        if((n==1 && k>=1) || (n==k)){
            for(int i=0; i<n; i++){
                cout<<"-";
            }cout<<endl;
            continue;
        }

        vector<string> str(n, "+");
        int count0 = count(s.begin(), s.end(), '0');
        int count1 = count(s.begin(), s.end(), '1');
        int count2 = count(s.begin(), s.end(), '2');

        // cout<<"count-0 = "<<count0<<endl;
        // cout<<"count-1 = "<<count1<<endl;
        // cout<<"count-2 = "<<count2<<endl;

        int i=0;
        int j=n-1;

        for( i; i<count0; i++){
            str[i] = '-';
        }
        for(j; j>((n-1)-count1); j--){
            str[j] = '-';
        }

        if(count2 >= 1){
            while(count2--){
                str[i] = '?';
                str[j] = '?';
                i++;
                j--;
            }
        }

        for (int i=0; i<n; i++) {
            cout<<str[i];
        }cout<<endl;
    }
    


    return 0;
}