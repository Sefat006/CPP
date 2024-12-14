

/* 

1. set only print one input once
2. means if i insert 5,5,5,5,5 using set and then print it;
    and then print it, it'll only print 5 once;
3. set always prints the elements in sorted;
4. count in set find any specific value
5. find : gives the reference of the found element;

    * count() and find() basically run the same operation;

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    s.insert(4);

    for( auto i : s){
        cout<< i<<" "; // 1 3 4 5
    }cout<<endl;

    //count: 
    cout<<" is 5 present? : "<< s.count(5)<<endl;

    //find : gives the reference of the found element;
    set<int> :: iterator itr = s.find(4);
    cout<<"value present at itr : "<< *itr<<endl;
    return 0;
}