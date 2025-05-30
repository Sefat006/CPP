#include<bits/stdc++.h>
using namespace std;

/*
    Find the pair whose sum is equal to x
    n
    a1,a2,a3,a4......an;
    approach :
     two loops together :
     i=0 ; j=n-1
        in every loop
         if(sum > x) ; means boro num er sathe add korse, tai num er value less er dike jabe (n-1)
        j. a1+an, a1+a(n-1),,,, a1+a2
        j--;

        if(sum < x) ; means choto num er sathe add korse, tai num er value greater er dike jabe (i+1)
        i. an+a1, an+a2, an+a3... an+a(n-1); i++;
*/

int val1, val2;

bool solve(int arr[], int x, int n){
    /*
    int i=0;
    int j = n-1;
    while(i<=j)*/

    for(int i=0, j=n-1; i<=j; ){
        int sum = arr[i]+arr[j];
        if(sum == x)
        {
            val1= arr[i];
            val2=arr[j];
            return true;
        }
        if(sum>x)
            j--;
        else
            i++;
    }

    /*
    if i use i++ and j-- in for loop condition

    for(int i = 0, j = n - 1; i <= j; i++, j--){
        int sum = arr[i] + arr[j];

        if(sum == x) return true;

    // এখন যদি sum != x হয়, তখন কিছু করার দরকার নেই
    // কারণ loop head এ i++, j-- আগেই হবে
}
    */
    return false;
}


int main(){
    int n; cin>> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
        sort(arr, arr+n);
        int x; cout<<"\n input x "<<endl;
        cin>>x;
        bool ans = solve(arr, x, n);

        if(ans){
            cout<<"yes"<<"\n"<< val1 <<" "<<val2<<endl;
        }else{
            cout<<"nO"<<endl;
        }


}
