

/*
    1. First we create a vector of strings to store the names of different car manufactures.
    2. Then we create a "vector iterator" called it, that we will use to loop through the vector.
    3. Next, we use a for loop to loop through the vector with the iterator. The iterator (it) points to the first element in the vector (cars.begin()) and the loop continues as along as it is not equal to cars.end().
    4. The increment operator (++it) moves the iterator to the next element in the vector.
    5. The dereference operator (*it) accesses the element the iterator points to.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{   
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    //create vector iterator "it";
    vector<string> :: iterator it;

    //loop through the vector with the iterator
    for( it = cars.begin(); it != cars.end(); it++)
    {
        cout<< *it << " ";
    }cout<<endl;


    // Point to the first element in the vector
    it = cars.begin();
    
    // Point to the second element
    it = cars.begin() + 1;

    // Point to the last element
    it = cars.end() - 1;

    return 0;
}