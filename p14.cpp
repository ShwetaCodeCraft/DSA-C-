// Rec-1
// Print numbers from 1 to N without using loops.

#include<bits/stdc++.h>
using namespace std;

void printNo(int N){
    if(N==0){
        return;
    }
    if(N>0){
        printNo(N-1);
        cout<<N<<" ";
    }
}

int main(){
    int N;
    cin>>N;
    printNo(N);
    return 0;
}