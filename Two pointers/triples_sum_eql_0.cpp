#include<bits/stdc++.h>
using namespace std;

/*
find all zero with triples thats sum = 0;
{1, -1, 0} = 0
we'll take subarray of 2 elements from i=[0] constant and i[i+1] continues
add them sum = arr[i]+arr[j],
make them negative -(arr[i]+arr[j])
then find if there is any value equal to and opposite sign of the sum;
*/

/*
    প্রতিটি i-এর জন্য লুপ চালাও
→ arr[i] কে ট্রিপলেটের প্রথম সংখ্যা ধরো।

একটি ফাঁকা unordered_set তৈরি করো
→ আগের দেখা arr[j]-গুলা রাখার জন্য।

j = i+1 থেকে শেষ পর্যন্ত লুপ চালাও
→ arr[j] কে ধরো দ্বিতীয় সংখ্যা হিসেবে।

চেক করো, তৃতীয় সংখ্যা -(arr[i] + arr[j]) আগে দেখা হয়েছিল কিনা (set-এ আছে কিনা)
→ থাকলে: ট্রিপলেট পাওয়া গেছে ✅
→ না থাকলে: arr[j] কে সেটে যোগ করো।

সব i/j জন্য Repeat করো
→ যতগুলো ট্রিপলেট পাওয়া যায় প্রিন্ট করো।
*/

void solve( int arr[], int n){
   for(int i=0; i<n; i++){
    unordered_set<int> s;
    for( int j=i+1; j<n; j++){
        int x = -(arr[i]+arr[j]);

        if(s.find(x) != s.end()){
            cout<<"("<<x<<","<<arr[i]<<","<<arr[j]<<")"<<endl;
        }else{
            s.insert(arr[j]);
        }
    }
   }
}


int main()
{
    int n; cin>> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    solve(arr, n );


    return 0;
}

