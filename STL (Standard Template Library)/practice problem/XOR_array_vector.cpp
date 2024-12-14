

//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

//You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    // a ^ a = 0 (any number XORed with itself is 0)
    // a ^ 0 = a (any number XORed with 0 is the number itself)
    int result = 0;
    for (int number : numbers) {
       result = result ^ number;
    }

    cout << "The single non-repeating number is: " << result << endl;

    return 0;
}