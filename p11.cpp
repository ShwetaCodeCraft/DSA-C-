// Check palindrome
//Given an integer x, return true if x is a palindrome, and false otherwise.
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
        int temp = x;
        int lastDigit ;
        long long result=0;
        if (x < 0 ){
            return false;
        }
        while(x!=0){
            lastDigit = x % 10;
            result = result * 10 + lastDigit;
            x = x/10;
        }
        if(result == temp)
            return true;
        else
            return false;
    }

int main(){
    int N;
    cin>>N;
    cout<<isPalindrome(N);
    return 0;
}
