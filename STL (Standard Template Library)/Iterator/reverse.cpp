#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Loop through the vector with an iterator in reverse order
  for (auto it = cars.rbegin(); it != cars.rend(); ++it) {
    cout << *it << "\n";
  }

  return 0;
}
