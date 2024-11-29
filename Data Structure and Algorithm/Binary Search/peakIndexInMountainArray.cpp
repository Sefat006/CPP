// peak index in mountain array

#include<iostream>
#include<vector>
using namespace std;


class Solution{
    public:

    int peakIndexInMountainArray(vector<int> &arr)
    {
        int start = 0;
        int end = arr.size() - 1;

        int mid = start + (end - start) / 2 ;

        while (start < end)
        {
            if( arr[mid] < arr[mid + 1]){ // means jodi increasing line shes hoye decreasing line shuru hoy
                start = mid + 1; // tahole decreasing er jonno new start and end;
            }
            else{
                end = mid; 
            }

            mid = start + (end - start) / 2;
        }

        return start;

    }
};

int main(){

    int n;
    cin>> n;

    vector<int> arr;
    for(int i = 0; i < n;i++) {       int x;
        cin>> x;
        arr.push_back(x);
    }

    Solution sol;
    int peakIndex = sol.peakIndexInMountainArray(arr);
    cout<< " peak index is" << peakIndex<<endl;

    return 0;

}
