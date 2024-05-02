
// You are given the choice 'ch' and an array 'a'.
// If ‘ch’ is 1, ‘a’ contains a single number ‘r’. If ‘ch’ is 2, ‘a’ contains 2 numbers, ‘l’ and ‘b’.
// Consider the choice and print the appropriate area.

#include<bits/stdc++.h>
using namespace std;
float areaSwitchCase(int ch, vector<int>a){
    switch (ch)
    {
    case 1:
        return 3.14*a[0]*a[0];
        break;
    case 2:
        return a[0]*a[1];
        break;    
    
    default:
        break;
    }
}
int main(){
    int ch;
    vector<int> a;
    cout<<"ch: ";
    cin>>ch;
    // a.push_back(3);
    // a.push_back(4);
    float result=areaSwitchCase(ch,a);
    cout<<result;
    return 0;
}