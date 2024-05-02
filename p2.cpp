// You’re given a data type. Print its size in bytes.

#include<bits/stdc++.h>
using namespace std;

int dataType(string type){
    char ch = type[0];
    switch (ch)
    {
    case 'i':
        cout<<"4 bytes";
        break;
    case 'l':
        cout<<"8 bytes";
        break;    
    case 'f':
        cout<<"4 bytes";
        break;
    case 'd':
        cout<<"8 bytes";
        break; 
    case 'c':
        cout<<"1 byte";
        break;       
    default:
        break;
    }
}
int main(){
 string s;
 cout<<"Enter a data type: ";
 cin>>s;
 dataType(s);
}