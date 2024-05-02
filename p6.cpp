//Write a program to input an integer 'n' and print the sum of all its even digits and the sum of all its odd digits separately.

#include<iostream>
using namespace std;

int main() {
	int n, sumEven=0, sumOdd=0,digit;
	cin>>n;
	while(n!=0){
		digit=n%10;
		n=n/10;
		if(digit%2==0)
		sumEven = sumEven+digit;
		else
		sumOdd = sumOdd +digit;
	}
cout<<sumEven<<" "<<sumOdd;
return 0;

}