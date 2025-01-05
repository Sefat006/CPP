#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 6, x;
    int array[n] = { 2,1,5,15,20,21};

    cout<< "enter the element at the beginning: ";
    cin>> x;

    // signing array into its next index;
    for(int i=n; i>0; i--){
        /*
            1.if n=5; then this loop will run from 5 to 1;
            2. then signing i = i-1; (array[n] = array[n-1]);
            3. i>0 bcz we're signing new element in index[0];
            4. if we have to sign in index[3], then i>3;
        */
        array[i] = array[i-1];
    }

    array[0] = x;
    n++;

    for( int i=0; i<n; i++){
        cout<< array[i]<<" ";
    }
    cout<<endl;

    return 0;
}