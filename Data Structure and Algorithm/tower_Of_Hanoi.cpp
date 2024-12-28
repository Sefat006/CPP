#include <bits/stdc++.h>
using namespace std;

//tower of hanoi
void towerOfHanoi(int n, char beg, char aux, char end)
{   
    // for 1 disk, directly move beginning to end tower;
    if (n == 1) {
        cout << "Move disk 1 from " << beg << " to " << end << endl;
        return;
    }
    /* for moving in the middle tower
        1. using end tower as 'aux'
        2. move the disk at end tower
        3. then move the disk from end to middle(aux) tower
    */

    // move the disk from beg to aux, mid tower = end
    towerOfHanoi(n-1, beg, end, aux);
    //move the nth disk from beg to end;(moving to mid tower = end)
    cout<< "move disk "<< n <<" from "<<beg<<" to "<<end<<endl;
    // move the disk from aux to end; mid tower = beg
    towerOfHanoi( n-1, aux, beg, end);
}

int main()
{
    int num;
    cout<<"enter the number of disks: ";
    cin>> num;

    cout<<"the sequence of moving disk from 'beg' to 'end' tower are as follows : "<<endl;

    towerOfHanoi( num, 'A', 'B', 'C');
    /*
        A = beg, B = aux, C = end;
    */

    return 0;
}