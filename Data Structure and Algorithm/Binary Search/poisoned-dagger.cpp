#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);

long long Damage(long long mid, vector<long long> &sec)
{
    long long damage = mid;

    for (long long i = 0; i < sec.size() - 1; i++)
    {
        damage += min(mid, sec[i + 1] - sec[i]);
    }

    return damage;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // code
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, dam;
        cin >> n >> dam;
        vector<long long> sec(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> sec[i];
        }

        if (dam < n)
        {
            cout << 1 << endl;
            continue;
        }

        // if( n == 1 ){
        //     cout<<dam<<endl;
        //     continue;
        // }

        long long low = 1;
        long long high = dam;

        while (low <= high)
        {
            long long mid = low + (high - low) / 2;

            if (Damage(mid, sec) >= dam){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        cout << low << endl;
    }

    return 0;
}