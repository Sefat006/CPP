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
        int n, StoZ = 26;
        cin >> n;
        string mini = "zzz", current;
        for(int i = 0; i < StoZ; i++){
            for(int j = 0; j < StoZ; j++){
                for(int k = 0; k < StoZ; k++){
                    if(i + j + k + 3 == n){
                        current += char(i + 'a');
                        current += char(j + 'a');
                        current += char(k + 'a');
                        mini = min(current, mini);
                    }
                }
            }
        }
        cout << mini << endl;
    }
    


    return 0;
}