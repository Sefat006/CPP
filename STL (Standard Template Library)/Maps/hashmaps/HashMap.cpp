#include <bits/stdc++.h>
using namespace std;



int main()
{
    // creation
    unordered_map<string, int> m;

    // insertion

    // 1
    pair<string, int> p = make_pair("babbar", 3);
    m.insert(p);

    //2 
    pair <string,int> pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //what will happen
    m["mera"] = 2;

    //searching
    cout<< m["mera"] << endl; // 2;
    cout<< m.at("babbar") << endl; //3;

    // to check any element's presence = m.count
    cout<< m.count("bro") << endl;

    //iterator : to access every element one by one (like for loop)
    unordered_map <string,int> :: iterator it = m.begin();
    
    // print every element till last
    while( it != m.end()){
        cout<< it -> first << " " << it->second << endl;
        it++;
    }

    return 0;
}