#include <bits/stdc++.h>
using namespace std;

/*
Prefix Sum হলো এমন একটা টেকনিক, যেখানে আমরা একটা অ্যারের প্রতিটি পজিশন পর্যন্ত যোগফল আগে থেকেই হিসাব করে রাখি — যেন future-এ দ্রুত কোনো রেঞ্জের যোগফল (sum) বের করা যায়।

arr[] = {2, 4, 1, 3, 6}

এখন prefix sum array হবে:
prefix[] = {2, 6, 7, 10, 16}

কারণ:
prefix[0] = 2
prefix[1] = 2 + 4 = 6
prefix[2] = 2 + 4 + 1 = 7
prefix[3] = 2 + 4 + 1 + 3 = 10
prefix[4] = 2 + 4 + 1 + 3 + 6 = 16

then we will be given query (subset) to find sum
l = starting of the index; r = end of the index of subset
*/

vector<int> prefix_sum(vector<int> &arr,int n){
    vector<int> pre_sum(n);

    // declaring 0th index will remain same
    pre_sum[0] = arr[0];

    //starting from the 1st index to n, elements will keep adding
    for( int i=1; i<n; i++){
        pre_sum[i] = arr[i] + pre_sum[i-1];
    }

    return pre_sum; // returning vector;
}


int main()
{
    int n; // number of element;
    cout<<"input the size of array , n = ";
    cin>> n;

    vector<int> arr(n);
    cout<<"\n input array : ";
    for( int i=0; i<n; i++){
        cin>> arr[i];
    }

    vector<int> result;
    result = prefix_sum(arr, n);

    int q; // how many query will test
    cout<<"\n input query/how many sum you wanna do : ";
    cin>> q;

    while (q--){
        int l, r;
        cout<<"\n input starting of index for query(l) and ending index for query(r) : ";
        cin>> l>>r;

        /*
        1st we'll find sum from i[0](start) to i[r](last range of query)
        then we'll substract the sum before the starting query l;
        so l-1, 
        */
        cout<< "\n the result for "<< l <<" to "<< r<< " index sum is : ";
        cout<< (result[r] - result[l-1])<<endl;
    }
    

    return 0;
}