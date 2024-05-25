//GCD and LCM
//Given two numbers A and B. The task is to find out their LCM and GCD.

#include<bits/stdc++.h>
using namespace std;

int gcd(int A, int B){
    while(A>0 && B > 0){
    if(A>B)
    A = A%B;
    if(B>A)
    B = B%A;
    }
    if(A==0) return B;
    if(B==0) return A;
}

vector<int> GCDandLCM(int A, int B){
    vector<int> result;
    int b = gcd(A,B);
    int a = A*B/b;
    result. push_back (a);
    result. push_back (b);
    return result;
}
int main(){
    int a, b;
    cin>>a>>b;
    vector<int> res = GCDandLCM(a,b);
    cout<<res[0]<<" "<<res[1];
    return 0;
}