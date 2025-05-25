#include <bits/stdc++.h>
using namespace std;



int main()
{   
    int t; cin>> t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        sort(vec.begin(), vec.end()); 
        // int maximum_int = *max_element(vec.begin(), vec.end());
        // int minimum_int = *min_element(vec.begin(), vec.end());

        bool found = false;
        int maximum = vec.back();

        int count = 0;
        for (int i = 0; i < vec.size() - 1; i++) {
    int minimum = vec[i];
    if ((maximum + minimum) % 2 == 0) {
        cout << count << endl;
        break;  
    } else {
        count++;
    }
}

    }
    

    return 0;
}