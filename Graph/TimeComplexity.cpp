#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <chrono>

using namespace std;

// Bubble Sort function
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Quick Sort helper functions
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print array
void printArray(const vector<int>& arr) {
    for (int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    srand(time(0));

    // Fill array with random numbers
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 1000; // random numbers from 0 to 999
    }

    vector<int> arrBubble = arr;
    vector<int> arrQuick = arr;

    // Measure Bubble Sort time
    auto start = chrono::high_resolution_clock::now();
    bubbleSort(arrBubble);
    auto end = chrono::high_resolution_clock::now();
    auto bubbleTime = chrono::duration_cast<chrono::microseconds>(end - start).count();

    // Measure Quick Sort time
    start = chrono::high_resolution_clock::now();
    quickSort(arrQuick, 0, n - 1);
    end = chrono::high_resolution_clock::now();
    auto quickTime = chrono::duration_cast<chrono::microseconds>(end - start).count();

    cout << "Bubble Sort Time: " << bubbleTime << " microseconds" << endl;
    cout << "Quick Sort Time: " << quickTime << " microseconds" << endl;

    // Optional: print sorted arrays for verification
    // printArray(arrBubble);
    // printArray(arrQuick);

    return 0;
}
