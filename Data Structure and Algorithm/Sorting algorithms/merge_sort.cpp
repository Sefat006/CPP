#include <bits/stdc++.h>
using namespace std;
using ll = long long;
//const double PI = 2 * acos(0.0);


// merge sort time 1h: 2min: 11 sec

void merge(ll s, ll e, vector<ll> &arr){
    ll mid = (s+e)/2;
    
    // two temp array for storing divided arr, start and end is declared
    vector<ll> tmpS, tmpE;
    for (int i=s; i<=mid; i++) {
        tmpS.push_back(arr[i]);
    }
    for (int i=mid+1; i<=e; i++) {
        tmpE.push_back(arr[i]);
    }

    // now sort divided array
    ll currentIndex = s;// declaring currentIndex = starting index
    ll S = 0, E = 0;

    while( S < tmpS.size() && E < tmpE.size()){
        // tmpS = {4, 3}, tmpE = {2, 1};
        // now check-> tmpS[0] < tmpE[0] ??
        // means if ( 4<2 ) ?? 
        if(tmpS[S] < tmpE[E]){
            arr[currentIndex] = tmpS[S];
            currentIndex++;
            S++;
        } else{
            arr[currentIndex] = tmpE[E];
            currentIndex++;
            E++;
        }
    }

    // if the size of both tmp array isn't same
    // if one array element is checked but another got something left
    // then we will just push the rest element as it is
    // ex: tmpS = {15,2}, tmpE={7,4,2,5,17}
    // when tmpS is finishes check, then the rest of the element from tmpE will remain as it is
    while( S < tmpS.size()){
        arr[currentIndex] = tmpS[S];
        currentIndex++;
        S++;
    }
    while( E < tmpE.size()){
        arr[currentIndex] = tmpE[E];
        currentIndex++;
        E++;
    }
}

// s = starting index of array
// e = ending index of array
void divide(ll s, ll e, vector<ll> &arr){
    // if array size is 1;
    if(s == e) return;

    ll mid = (s+e)/2; // [ l to mid ], [ mid+1 to r]

    //divide the array
    divide(s, mid, arr);
    divide(mid+1, e, arr);

    //then merge
    merge(s, e, arr);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // code
    vector<long long> arr = { 4, 3 ,2, 1};
    for (int i=0; i<arr.size(); i++) {
        cout<< arr[i]<<" ";
    }cout<<endl;


    return 0;
}