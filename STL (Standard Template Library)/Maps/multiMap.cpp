#include <bits/stdc++.h>
using namespace std;



int main()
{
    multimap <string, int> m;

    // or m.emplace("tv", 100);
    m.insert({"tv", 100});
    m.insert({"tv", 100});
    m.insert({"tv", 100});
    m.insert({"tv", 100});

    // to erase all: m.erase("tv");

    //to erase only one:
    m.erase(m.find("tv"));
    
    for(auto p: m){
        cout<< p.first << " "<< p.second<<endl;
    }

    return 0;
}