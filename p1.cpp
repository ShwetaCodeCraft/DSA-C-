//Write a program that takes a character as input and prints 1, 0, or -1 according to the following rules.
// 1, if the character is an uppercase alphabet (A - Z).
// 0, if the character is a lowercase alphabet (a - z).
// -1, if the character is not an alphabet.

#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    if (islower(ch))
    {
        cout<<"0";
    }
    else if (isupper(ch))
    {
        cout<<"1";
    }
    else{
        cout<<"-1";
    }
    
    return 0;
}