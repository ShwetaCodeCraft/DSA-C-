//Provided 'n' you have to find out the n-th Fibonacci Number. Handle edges cases like when 'n' = 1 or 'n' = 2 by using conditionals like if else and return what's expected.

#include<bits/stdc++.h>
using namespace std;

int main()
{
        long f;
        long n1,n2;
        n1=1;
        n2=1;
        cin>>f;
        int result=0;
        if(f==0)
        result=0;
        else if (f==1 || f==2){
        result=1;
        }
        else{
                for (int i = 0; i < f - 2; i++) {
                  result = n1 + n2;
                  n1 = n2;
                  n2 = result;
                }
        }
       cout<<result;
}