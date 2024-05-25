// REVERSE INTEGER

//Given a signed 32-bit integer x, return x with its digits reversed.
// If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include<bits/stdc++.h>
using namespace std;

int ReverseInteger(int x){
    long result = 0; 
        int lastDigit;
        
        while(x){
            lastDigit = x % 10;
            result = result * 10 + lastDigit;
            x = x / 10;
        }
        if(result > INT_MAX|| result < INT_MIN){
            return 0;
        }
        return result;
}

int main(){
    int N;
    cin>>N;
    cout<<ReverseInteger(N);
    return 0;
}

