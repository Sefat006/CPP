#include <bits/stdc++.h>
using namespace std;

/*
    problem name : Maximum Number Frequency [codeNinja]

    Ninja is given an array of integers that contain numbers in random order. He needs to write a program to find and return the number which occurs the maximum times in the given input. He needs your help to solve this problem.

    If two or more elements contend for the maximum frequency, return the element which occurs in the array first i.e. whose index is lowest.

    For example,

    For 'arr' = [ 1, 2, 3, 1, 2]. you need to return 1.
*/

int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map <int, int> count;

    int maxFreq = 0;
    int maxAns = 0;

    for(int i=0; i<arr.size(); i++)
    {
        count[arr[i]]++; 
        maxFreq = max(maxFreq, count[arr[i]]); /*max() ফাংশন ব্যবহার করে maxFreq আপডেট করা হচ্ছে। যদি নতুন কোনো সংখ্যার ফ্রিকোয়েন্সি আগের maxFreq থেকে বেশি হয়, তাহলে maxFreq সেটি গ্রহণ করবে। */
    }
/*
    কোডটি কীভাবে কাজ করবে?
i	arr[i]	count[arr[i]]++	maxFreq = max(maxFreq, count[arr[i]])	maxFreq
0	3	count[3] = 1	max(0, 1) = 1	1
1	1	count[1] = 1	max(1, 1) = 1	1
2	2	count[2] = 1	max(1, 1) = 1	1
3	3	count[3] = 2	max(1, 2) = 2	2
4	3	count[3] = 3	max(2, 3) = 3	3
5	2	count[2] = 2	max(3, 2) = 3	3
6	1	count[1] = 2	max(3, 2) = 3	3

*/ 
    for (int i=0; i<arr.size(); i++)
    {
        if(maxFreq == count[arr[i]]) // if max = count,, then it will reserve ans in maxAns and that will be the ans so then break;
        {
            maxAns = arr[i];
            break;
        }
    }
    return maxAns;
}