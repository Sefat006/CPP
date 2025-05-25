#include <bits/stdc++.h>
using namespace std;


/*
Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Input: arr = [1,2]
Output: false
*/
class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            unordered_map<int, int> freq;
            map<int, int> count;
            int n = arr.size();

            // step-1 : count occurences of each number
            for(int i=0; i<n; i++){
                freq[arr[i]]++;
            }

            // step 2 : store freq values in count
            for( auto &[key, value] : freq ){
                count[value]++;

                if( count[value] > 1){
                    return false;
                }
            }
            return true;
        }
    };