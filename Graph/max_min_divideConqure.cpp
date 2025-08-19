#include <bits/stdc++.h>
using namespace std;

void findMaxMin(vector<int> &arr, int low, int high, int &minVal, int &maxVal) {
    // If only one element
    if (low == high) {
        minVal = maxVal = arr[low];
        return;
    }

    // If two elements
    if (high == low + 1) {
        if (arr[low] > arr[high]) {
            maxVal = arr[low];
            minVal = arr[high];
        } else {
            maxVal = arr[high];
            minVal = arr[low];
        }
        return;
    }

    // Divide
    int mid = (low + high) / 2;
    int minLeft, maxLeft, minRight, maxRight;

    // Conquer
    findMaxMin(arr, low, mid, minLeft, maxLeft);
    findMaxMin(arr, mid + 1, high, minRight, maxRight);

    // Combine
    minVal = min(minLeft, minRight);
    maxVal = max(maxLeft, maxRight);
}

int main() {
    int n;
    cout << "Enter the length of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minVal, maxVal;
    findMaxMin(arr, 0, n - 1, minVal, maxVal);

    cout << "Minimum: " << minVal << endl;
    cout << "Maximum: " << maxVal << endl;

    return 0;
}
