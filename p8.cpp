/*Pattern program - 01
*****
*****
*****
*****
*****
*/
#include<bits/stdc++.h>
using namespace std;

int pattern(int a, int b){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout<<"*";
        }  
        cout<<"\n";
    }
    return 0;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    pattern(a,b);
}