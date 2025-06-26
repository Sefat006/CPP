#include<bits/stdc++.h>
using namespace std;


/* Problem: You are given n activities with their start and finish times. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time

example:

|             | A1 | A2 | A3 | A4 | A5 |
| ----------- | -- | -- | -- | -- | -- |
| **Start**   | 1  | 3  | 0  | 5  | 8  |
| **End**     | 2  | 4  | 6  | 7  | 9  |
| **Select?** |✅ | ✅ | ❌ | ✅| ✅ |

A2 → starts at 3 ≥ 2 ✅ → select it
A3 → starts at 0 < 4 ❌ → skip (overlaps)
A4 → starts at 5 ≥ 4 ✅ → select it
A5 → starts at 8 ≥ 7 ✅ → select it

it will print how many pair is good to go (count)
and what are the pairs

*/





int activitySelection(int start[], int end[], int n){
    // step - 1
    vector<int> idx(n);
    iota(idx.begin(), idx.end(), 0); // idx = {0,1,2,3...n-1}
    // Print unsorted activities
    cout << "Before sorting:\n";
    cout << "Index\tStart\tEnd\n";
    for (int i = 0; i < n; i++) {
        cout <<i<<"\t"<< start[i] << "\t" << end[i] << "\n";
    }
    cout << "\n";



    // Step 2: Sort indices based on end[] values
    sort( idx.begin(), idx.end(), [&](int a, int b){
        return end[a] < end[b];
    });
    /*  after sorting
        idx[0] is now 2(value) (not 9 anymore).
        end[idx[0]] = end[2] = 2(index number before sorting) 
    */
    // Print sorted activities by end time
    cout << "After sorting by end time:\n";
    cout << "Index\tStart\tEnd\n";
    for (int i = 0; i < n; i++) {
        cout <<idx[i] << "\t"<< start[idx[i]] << "\t" << end[idx[i]] << "\t" << "\n";
    }
    cout << "\n";



    // step - 3
    int count = 1; // index[0] always accepted
    int prev_end = end[idx[0]]; // prev_end = 2;
    vector<int> selected;
    selected.push_back(idx[0]);

    for (int i=1; i<n; i++) {
        int curr = idx[i]; // starting from 4(value)

        if( start[curr] > prev_end ){
            count++;
            prev_end = end[curr];
            selected.push_back(curr);
        }
    }


    // final Print
    cout << "Maximum number of activities: " << count <<endl;

    // Print selected activities' start and end times
    cout << "Selected activities (start, end):\n";
    for (int i : selected) {
        cout << "(" << start[i] << ", " << end[i] << ")"<<endl;
    }

    return count;

}



int main(){
    int start[] = {1, 3, 0, 5, 8};
    int end[] =   {9, 4, 2, 7, 6}; 

    /*
    * approach: we are gonna sort the end[]

        1. take a vector idx, that will 1st keep track of the unsorted end[], then when we sort end, the idx will be the same as unsorted one

        2. sort end[]
        3. take the 1st index[0] always as count, bcz we are gonna compare with 1st pair
        4. 
    */

    int n = sizeof(end)/sizeof(end[0]);

    activitySelection( start, end, n);

    
}

