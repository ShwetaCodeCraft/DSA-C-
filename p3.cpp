//Print “smaller”, “greater” or “equal” when ‘a’ is smaller than ‘b’, greater than ‘b’, or equal to ‘b’ respectively.

#include<bits/stdc++.h>
using namespace std;
string compareIfElse(int a, int b){
    if(a>b){
		return "greater";
	}
	else if (a<b){
		return "smaller";
	}
	else
	return "equal";
}
int main(){
int a, b;
cin>>a>>b;
string result = compareIfElse(a,b);
cout<<result<<endl;
}