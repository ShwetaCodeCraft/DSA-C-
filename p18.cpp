//rec-5
//Given a number N, the task is to return the list/vector of the factorial numbers smaller than or equal to N.

#include<bits/stdc++.h>
using namespace std;

vector<long long > facNum(long long N, long long a, long long b, vector< long long> result){
    if(a>N){
        return result;
    }
    
    result.push_back(a);
    b++;
    return facNum(N, a*b, b, result);
}
    vector<long long> factorialNumbers(long long N)
    {
        vector<long long> result;
         return facNum(N, 1, 1, result) ;
    }
int main(){
    int n;
    cin>>n;
    vector<long long > result = factorialNumbers(n);
    for(auto it : result){
            cout<<it<<" ";
        };
    return 0;
}


