#include <bits/stdc++.h>
using namespace std;



int main()
{
    double n; cin>> n;

    vector<double> p(n);
    for(double i=0; i<n; i++){
        cin>> p[i];
    }

    double sum_of_p = accumulate(p.begin(), p.end(), 0);

    double volume = sum_of_p/n;

    cout<<fixed << setprecision(13)<< volume<<endl;

    return 0;
}