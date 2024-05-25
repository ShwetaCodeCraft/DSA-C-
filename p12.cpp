//sum of Divisors

//Given a positive integer N.
// The task is to find the value of Σi from 1 to N F(i) where function F(i) for the number i is defined as the sum of all divisors of i.

#include<bits/stdc++.h>
using namespace std;

long long sumOfDivisors(int N){
    int sum = 0;
    for (int i = 1; i <=  N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i % j == 0){
            sum = sum + j;
            }
        }
        //sum += i * (N/i); 
        
    }
    return sum;
    
}

int main(){
    int N;
    cin>>N;
    cout<<sumOfDivisors(N);
    return 0;
}