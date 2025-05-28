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
        
        
        if( (vec[0]+vec[n-1] ) % 2 == 0){
            cout<<0<<endl;
            continue;
        }else{
            vector<int> vec1 = vec;
            vector<int> vec2 = vec;
            
            int count_i = 0, count_j = 0;
            
            while(vec1.size() > 1){
                vec1.erase(vec1.begin());
                count_i++;
                if( (vec1[0]+vec1.back()) %2 == 0){
                    break;
                }
            }

            while(vec2.size() > 1){
                vec2.pop_back();
                count_j++;
                if( ((vec2.back())+vec2[0]) %2 == 0){
                    break;
                }
            }

            cout<< min(count_i, count_j)<<endl ;
        }

    }
    

    return 0;
}