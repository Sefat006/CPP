#include <bits/stdc++.h>
using namespace std;
// const double PI = 2 * acos(0.0);

/*
| i | x[i] | Stack before                                           | Action                      | Stack after                                    | Output         |                              |   |
| - | ---- | ------------------------------------------------------ | --------------------------- | ---------------------------------------------- | -------------- | ---------------------------- | - |
| 1 | 2    | {(0,0)}                                                | 2 > 0 → no pop              | {(0,0),(2,1)}                                  | 0              |                              |   |
| 2 | 5    | {(0,0),(2,1)}                                          | 5 > 2 → no pop              | {(0,0),(2,1),(5,2)}                            | 1              |                              |   |
| 3 | 1    | {(0,0),(2,1),(5,2)}                                    | 1 <= 5 → pop → 1 <= 2 → pop | {(0,0)}                                        | 0              | 0                            |   |
| 4 | 4    | {(0,0)}                                                | 4 > 0 → no pop              | {(0,0),(4,4)}                                  | 0              |                              |   |
| 5 | 8    | {(0,0),(4,4)}                                          | 8 > 4 → no pop              | {(0,0),(4,4),(8,5)}                            | 4              |                              |   |
| 6 | 3    | {(0,0),(4,4),(8,5)}                                    | 3 <= 8 → pop → 3 <= 4 → pop | {(0,0)}                                        | 0              |                              |   |
| 7 | 2    | {(0,0),(3,6)?} wait we popped 4 and 8 → {(0,0),(3,6)?} | let’s correct               | Actually previous step pushed 3: {(0,0),(3,6)} | 3 > 0 → no pop | push 2 → {(0,0),(3,6),(2,7)} | 6 |
| 8 | 5    | {(0,0),(3,6),(2,7)}                                    | 5 > 2 → no pop              | push 5 → {(0,0),(3,6),(2,7),(5,8)}             | 7              |                              |   |

*/


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int n; cin>>n;
    stack< pair<int,int> > st;
    st.push({0,0});
    for (int i=1; i<=n; i++) {
        int x; cin>>x;

        while( x <= st.top().first){
            st.pop();
        }

        cout<<st.top().second<<" ";
        st.push({x,i});

    }


    return 0;
}