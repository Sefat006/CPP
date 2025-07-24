#include <bits/stdc++.h>
using namespace std;

/* we will first store the sum of (i+ i+1 + i+2 + .... + i+k)
    declare i=1, j=k (for index=0)
    then with the every iteration, we will add arr[j+1] and substract arr[i];

    example :  [5,7,1,4], k = 3
    for index[0]=5, arr[i]=7,arr[j]=4,
    step - 1: 7+1+4 = 12 = sum; 
    then for index[1]=7, we'll add ((j+1)%n)[circular] and substract i;
    step - 2: sum = sum+arr[(j+1)%n]-arr[i] 
                  = 12+5-7 = 10,, 
    and thats how

    we'll do like this for k>0 , k<0
*/
vector<int> decrypt(vector<int>& code, int k) {
    int n=code.size();
    int i= -1, j= -1;
    vector<int> result(n, 0); // if k=0;
    if( k==0 ){
        return result;
    }

    if( k > 0){
        i=1;
        j=k;
    }else{
        i= n-abs(k);
        j=n-1;
    }

    int windowSum = 0;
    // just finding the 1st sum
    for (int index=i; index<=j; index++) {
        windowSum = windowSum + code[index];
    }

    for (int k=0; k<n; k++) {
        result[k] = windowSum; //for index=0 only, then it will increase in every iteration

        windowSum = windowSum - code[i%n];
        i++;

        windowSum = windowSum + code[(j+1)%n];
        j++;
    }

    return result;
}