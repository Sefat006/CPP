#include <iostream>
using namespace std;

void reachHome(int src, int dest) {
    cout << "Source " << src << " Destination " << dest << endl;

    // Base case
    if (src == dest) {
        cout << "arrived" << endl;
        return;
    }

    // Processing - ek step aage badhjao
    src++;

    // Recursive call
    reachHome(src, dest);
}

int main() {
    int dest = 10;
    int src = 1;

    cout << endl;

    reachHome(src, dest);
    return 0;
}