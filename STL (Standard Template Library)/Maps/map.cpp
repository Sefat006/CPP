#include <bits/stdc++.h>
using namespace std;

// map will sort the keys and print the keys in ascending order

int main()
{
    // map< key, value> name;
    map<string, int> m;

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;

    //insert:
    m.insert({"camera", 25});

    for( auto p: m){
        cout<< p.first << " "<< p.second<<endl;
    }

    // count: describe in set;
    cout<< "count : "<< m["laptop"];

    return 0;
}