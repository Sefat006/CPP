#include <iostream>
#include <vector>
using namespace std;

/*
-------------------------------
🔍 SLIDING WINDOW TECHNIQUE
-------------------------------
💡 Purpose:
   - To efficiently process a **contiguous subarray** or **sequence of fixed size** within an array or string.
   - Instead of recalculating from scratch for each subarray, it "slides" over the data to save time.

🛠️ How it works:
   - Start with a "window" (a range of size `k`) at the beginning.
   - Compute its result (sum, max, etc.).
   - Slide the window one step at a time:
       Remove the first element of the window and add the next one.
       Update the result accordingly.

⚡ Use case:
   - Useful in problems that ask for the **maximum/minimum/sum/average** of subarrays of size `k`.
   - Time Complexity: O(n) instead of O(n*k) (brute force).

Example:
   Array: [1, 3, 2, 6, -1, 4, 1, 8, 2]
   k = 5
   Goal: Max sum of any subarray of size 5
*/


int main() {
    // Example input
    vector<int> nums = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    int k = 5;

    int windowSum = 0;
    int maxSum = 0;

    // 🔁 Step 1: Compute sum of the first window
    for (int i = 0; i < k; ++i) {
        windowSum += nums[i];
    }

    // 🌟 Initialize maxSum with the first window sum
    maxSum = windowSum;

    // 🔁 Step 2: Slide the window across the array
    for (int i = k; i < nums.size(); ++i) {
        // 🧹 Remove element going out of the window
        // ➕ Add the new element entering the window
        windowSum = windowSum + nums[i] - nums[i - k];

        // 🔄 Update maxSum if needed
        maxSum = max(maxSum, windowSum);
    }

    // 🧾 Print result
    cout << "Maximum sum of subarray of size " << k << " is: " << maxSum << endl;

    return 0;
}
