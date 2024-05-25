//Count Digits
//Given a number N. Count the number of digits in N which evenly divide N.


#include<bits/stdc++.h> 
using namespace std;

    int evenlyDivides(int N){
        int lastDigit;
        int  cnt = 0;
        int num = N;
        while(N>0){
            lastDigit = N%10;
            N = N/10;
            if(lastDigit && num % lastDigit == 0){
                cnt++;
            }
        }
        return cnt;
        }


int main() 
{ 
    int N;
    cin>>N;
    cout<<evenlyDivides(N);
    return 0; 
}