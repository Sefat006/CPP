#include<iostream>
using namespace std;

int fib(int n)
    {
        // fibonacci recursion
        if(n == 0){
            return 0;
        }

        if(n==1){
            return 1;
        }

        int ans = fib(n-1) + fib(n-2);

        return ans;
    }

int main()
{
    int n;
    cin>> n;

    int solution = fib(n);
    cout<<solution<<endl;

    return 0;
}