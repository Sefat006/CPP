

// print the sum of the elements of an array

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declare an array of size n
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;  // Initialize sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];  // Add each element to sum
    }

    cout << "The sum of the elements is: " << sum << endl;
    return 0;
}
