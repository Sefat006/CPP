#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value, weight;
};

// Function to get maximum value in Knapsack
double fractionalKnapsack(int W, vector<Item> &items) {
    // Sort items by value/weight ratio in descending order
    sort(items.begin(), items.end(), [](Item a, Item b) {
        double r1 = (double)a.value / a.weight;
        double r2 = (double)b.value / b.weight;
        return r1 > r2;
    });

    double finalValue = 0.0; // Result

    for (auto &it : items) {
        if (W >= it.weight) {
            // If item can be picked fully
            W -= it.weight;
            finalValue += it.value;
        } else {
            // Take fraction of item
            finalValue += it.value * ((double)W / it.weight);
            break;
        }
    }

    return finalValue;
}

int main() {
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items(n);
    cout << "Enter value and weight of each item:\n";
    for (int i = 0; i < n; i++) {
        cin >> items[i].value >> items[i].weight;
    }

    cout << "Enter capacity of knapsack: ";
    cin >> W;

    double maxVal = fractionalKnapsack(W, items);
    cout << "Maximum value in Knapsack = " << fixed << setprecision(2) << maxVal << endl;

    return 0;
}
