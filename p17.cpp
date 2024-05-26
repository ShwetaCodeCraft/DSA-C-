//Rec-4
//Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term

#include<bits/stdc++.h>
using namespace std;

long long res = 0;
    long long sumOfSeries(long long n) {
        if(n==0)
        return 0;
        res= res+(n*n*n);
        sumOfSeries(n-1);
        return res;
    }

int main(){
    int n;
    cin>>n;
    cout<<sumOfSeries(n);
    return 0;
}
