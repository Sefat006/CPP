#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
 
    while(t--)
    {
        int n,k;
        cin >> n>> k;
 
        vector<int>vec(n);
        for(int i=0; i<n; i++)
        {
            cin >> vec[i];
        }
 
        int count=0,hike=0;
        for(int i=0; i <n ; i++)
        {
            if(vec[i]==0)
                count++;
            else
                count=0;
 
            if(count == k)
            {
                hike++;
                count=0;
                i++;
            }
        }
 
        cout << hike << endl;
    }
}