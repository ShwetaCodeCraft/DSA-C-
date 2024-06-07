//rec-7
//509. Fibonacci Number
//The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1.
//F(0) = 0, F(1) = 1
//F(n) = F(n - 1) + F(n - 2), for n > 1.
#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
        if(n<=0) return 0;
        if(n==1) return 1;
        int result = fib(n-1)+fib(n-2);
        return result;
    }

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}