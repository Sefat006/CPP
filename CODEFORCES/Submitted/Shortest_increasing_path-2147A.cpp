#include <bits/stdc++.h>
using namespace std;
const double PI = 2 * acos(0.0);



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    int t; cin>>t;

    while(t--){
		int x,y;
		cin>>x>>y;
		if(x==y || x==y+1 || y==1)cout<<-1<<endl;
		else if(x<y)cout<<2<<endl;
		else cout<<3<<endl;
	}


    return 0;
}