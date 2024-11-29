//root of a number using binary search
// if n=36; first run the binary search a find the mid between 0-36;
// 36/2=18; so mid = 18; but mid*mid != 36(n) and 18*18 = 324 > 36;
// that means the root of 36 shall be found in between 0 - 18; so now  start = 0 and end = mid - 1; and then again run the binary search;
// if mid*mid < n; ans = mid; start = mid + 1;

#include<iostream>
using namespace std;

// if n = 100000 then we have to use
// long long int binarySquare(int n){}
int IntegerBinarySquare(int n){
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;

    // long long int ans = -1;
    int ans = -1;
    
    while( s <= e){

        // long long int square = mid*mid;
        int square = mid*mid;

        if (square == n){
            return mid;
        }

        if(square < n){
            ans = mid;
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }

    return ans;
}

// for point ans;
double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for ( int i = 0; i<precision; i++){
        factor = factor/10; // 0.1;

        for(double j = ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int x;
    cout<< "input x"<<endl;
    cin>> x;

    int tempSol = IntegerBinarySquare(x);
    
    cout<<"the root of "<< x<<" is : "<< morePrecision(x, 3, tempSol) <<endl;

    return 0;
}